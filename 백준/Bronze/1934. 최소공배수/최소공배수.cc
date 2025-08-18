#include <iostream>
using namespace std;
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int caseNum;
    cin >> caseNum;

    for(int i = 0; i<caseNum; i++){
        int num1, num2;

        cin >> num1 >> num2;
        int gcdResult = gcd(num1, num2);
        int lcm = (num1 * num2) / gcdResult;
        cout << lcm << "\n";
    }
    return 0;
}