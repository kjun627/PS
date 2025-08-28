#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    if(k == 0){
        cout << 1 << "\n";
        return 0;
    }
    int nLen = n - k;
    int nTotal = n;
    int bunja = nTotal-1;
    for(int i =1; i< k; i++){
        nTotal *= bunja;
        bunja--;
    }
    // cout << nTotal << endl;
    int bunmo = k-1;
    int kTotal = 0;
    for(int i = 0; i<k; i++){
        if(i == 0){
            kTotal = k;
            continue;
        }
        kTotal *= bunmo;
        bunmo--;
    }
    // cout << kTotal << endl;

    cout << nTotal / kTotal << "\n";
    return 0;
}