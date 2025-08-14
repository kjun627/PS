#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int mean = 0;
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
        mean += arr[i];
    }

    cout << mean/5 << endl;
    int index = 5;
    for (int i = 0; i<index-1; index--){
        for (int j = 0; j < index-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << arr[2] << endl;

    return 0;


}