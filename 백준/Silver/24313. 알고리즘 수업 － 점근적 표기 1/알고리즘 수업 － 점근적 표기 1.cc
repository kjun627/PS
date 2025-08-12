#include <iostream>
using namespace std;

int main(){
    int a1, a0, c ,n0;
    cin >> a1 >> a0;
    cin >> c >> n0;
    
    int f1 = a1 * n0 + a0;
    int g1 = c * n0;

    if(a1 > c){
        cout << 0 << endl;
        return 0;
    }

    if(g1 >= f1){
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}