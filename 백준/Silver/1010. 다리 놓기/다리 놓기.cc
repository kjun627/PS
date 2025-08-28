#include <iostream>
using namespace std;

int main(){

    int caseNum;
    cin >> caseNum;
    for (int i = 0; i<caseNum; i++){
        int n, k;
        cin >> n >> k;
        if(n == 0){
            cout << 1 << "\n";
            continue;
        }
        long long result = 1;
        int bunja = k;
        int bunmo_val = 1;
        
        for(int j = 0; j < n; j++){
            result = result * bunja / bunmo_val;
            bunja--;
            bunmo_val++;
        }

        cout << result << "\n"; 
    }
    return 0;
    
}