#include <iostream>
using namespace std;

int main(){
    int num , k;
    cin >> num >> k;


    int* arr = new int[num];
    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }

    int index = num;
    for (int i = 0; i<index-1; index--){
        for (int j = 0; j < index-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout << arr[k-1] << endl;

    return 0;


}