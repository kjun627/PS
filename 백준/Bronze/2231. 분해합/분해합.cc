#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    cin >> number;
    for(int i = 0; i < number; i++){
        if(i < 10){
            int compareNum = i *2;
            if(compareNum == number){
                cout << i << endl;
                return 0;
            }
        }
        else{
            int temp = i;
            int total = i;
            while(temp >= 1){
                int mod = temp % 10;
                total += mod;
                temp /= 10;
            }
            if(number == total){
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}