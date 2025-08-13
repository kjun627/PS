#include <iostream>
using namespace std;

int main(){
    int n , m;

    cin >> n >> m;

    int* arr = new int[n];

    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int closeNum = 0;

    for (int i = 0; i<n-2; i++){
        for (int j = i+1; j<n-1; j++){
            for (int k = j+1; k <n; k++){
                int sum = arr[i] + arr[j]+ arr[k];
                if(m - sum >=0 && closeNum <= sum){
                    closeNum = sum;
                }
            }
        }
    }

    cout << closeNum << endl;

    delete[] arr;

    return 0;
}