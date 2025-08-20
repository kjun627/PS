#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int startNum = -1;

    while(startNum != 0){
        cin >> startNum;
        int endNum = 2*startNum;
        if(startNum == 0){
            continue;
        }
        if(startNum ==1){
            cout << 1 << "\n";
            continue;
        }
        int totalSosu = 0;
        
        for (int i = startNum+1; i <=endNum; i++){
            bool isSosu = true;
            int index = sqrt(i);
            for (int j = 2; j<= index; j++){
                if(i % j == 0){
                    isSosu =false;
                    break;
                }
                else if(i % j != 0){
                    continue;
                }

            }
            if(isSosu){
                totalSosu++;
            }
        }  
        cout << totalSosu << "\n";  
    }
    
    return 0;
    
}