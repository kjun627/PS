#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num == 1){
        cout << "1" << endl;
        cout << "2" << endl;
        return 0;
    }
    long long total = (long long) num * num;
    cout << total << endl;
    cout << "2" << endl;

    return 0;
}