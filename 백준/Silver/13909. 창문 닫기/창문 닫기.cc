#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long openWindow = (long long) sqrt(N);
    cout << openWindow << "\n";

    return 0;
}