#include <iostream>
using namespace std;

int main(){
    long long int num;
    cin >> num;
    if(num == 0){
        cout << 1 << endl;
        return 0;
    }
    int total = num;

    for(int i = num-1; i>= 1; i--){
        total *= i;
    }

    cout << total << "\n";
    return 0;
}