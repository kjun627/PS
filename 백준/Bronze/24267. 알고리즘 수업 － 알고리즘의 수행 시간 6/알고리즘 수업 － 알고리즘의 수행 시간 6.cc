#include <iostream>
using namespace std;

int main(){
    int num;
    cin >>num;

    long long total = 0;
    long long start = 0;
    for (int i = 1; i < num-1; i++){
        start += i;
        total += start;
    }
    cout << total << endl;
    cout << "3" << endl;
    return 0;
}