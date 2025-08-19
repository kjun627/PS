#include <iostream>
using namespace std;
long long int gcd(long long int a, long long int b){
    return b == 0 ? a : gcd(b , a%b);
}
int main(){
    long long int n1, n2, n3, n4;

    cin >> n1 >> n2 >> n3 >> n4;

    long long int sum1, sum2;
    
    // 최소 공배수로 분모 , 그거 기반으로 분자 계산
    sum2 = (n2 * n4) / gcd(n2, n4);
    sum1 = (sum2 / n2) * n1 + (sum2/n4) * n3;

    // cout << "sum2 :" << sum2 << endl;
    // cout << "sum1 : " << sum1 << endl;
    // 기약분수 만들기
    // 두 수의 최대공약수로 계속 나누기.
    while(gcd(sum1, sum2) != 1 ){
        // cout << "in loop sum2 :" << sum2 << endl;
        // cout << "in loop sum1 : " << sum1 << endl;
        long long int gcdValue = gcd(sum1, sum2);
        sum1 /= gcdValue;
        sum2 /= gcdValue; 

    }

    cout << sum1 << " " << sum2 << "\n";

    return 0;
}