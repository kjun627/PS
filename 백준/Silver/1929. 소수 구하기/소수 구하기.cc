#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int startNum, endNum;

    cin >>startNum >> endNum;

    if(startNum == 1 && endNum != 1){
        startNum++;
    }
    else if(startNum ==1 && endNum == 1){
        return 0;
    }

    for(int i = startNum; i<=endNum; i++){
        bool isNotSosu = false;
        int index = sqrt(i);

        for(int j = 2; j<=index; j++){
            if(i % j == 0){
                isNotSosu = true;
                break;
            }
        }
        if(!isNotSosu){
            cout << i << '\n';
        }
    }
    return 0;
}