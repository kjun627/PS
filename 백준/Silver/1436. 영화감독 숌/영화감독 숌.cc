#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    cin >> num;
    int count666 = 0;
    int startNum = 0;

    while(count666 != num){
        startNum++;
        string number = to_string(startNum);
        int len = number.length();

        for(int i = 0; i<len-2; i++){
            if(number[i] == '6' && number[i+1] == '6' && number[i+2] == '6'){
                count666++;
                break;
            }
        }
    }
    cout <<startNum << endl;
    return 0;
}