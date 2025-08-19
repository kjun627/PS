#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b){
    return b == 0 ? a : gcd(b, a%b);
}

int main(){
    long long int num1, num2;

    cin >> num1 >> num2;

    long long int gcdValue = gcd(num1, num2);
    long long int lcd = (num1 * num2)/gcdValue;

    cout << lcd << "\n";

    return 0;
}