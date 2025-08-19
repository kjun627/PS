#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tryCount;
    cin >> tryCount;

    for(int k = 0; k< tryCount; k++){
        long long int number = 0;    
        cin >> number;
        if(number == 1 || number == 0){
            cout << 2 << "\n";
            continue;
        }
        
        bool isWorking = false;
        bool isNotSosu = false;

        while(!isWorking){
            long long int index = sqrt(number);
            for (int i = 2; i<=index; i++){
                if(number % i == 0){
                    isNotSosu = true; 
                    break;
                }
            }
            if(isNotSosu){
                isNotSosu = false;
                number++;
                continue;
            }
            else{
                cout << number << "\n";
                isWorking = true;
            }
        }
    }
    return 0;
}