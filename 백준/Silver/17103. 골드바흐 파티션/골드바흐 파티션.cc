#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int caseNum = 0;
    cin >> caseNum;
    int arr[1000001];
    
    for(int i = 2; i <= 1000000; i++) {
        arr[i] = 1;
    }
    arr[0] = 0, arr[1] = 0;
    for(int i = 3; i <= 1000000; i++){
        int index = sqrt(i);
        for(int j = 2; j<= index; j++){
            if(i %j == 0 ){
                arr[i] = 0;
                break;
            }
        }
    }

    for(int i = 0 ; i<caseNum; i++){
        int n = 0;
        cin >> n;

        int totalGolden = 0;
        for(int j = 2; j <= n/2; j++){
            if(arr[j] == 0){
                continue;
            }

            int remain = n - j;
            if(arr[remain] == 1){
                totalGolden++;
            }
        }
        
        cout << totalGolden << "\n";
    }

    return 0;
}