#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    
    int* arr = new int[num];

    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }
    int count = num;
    for( int i = count-1; count >0 ;count--){
        for (int j = 0; j < i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < num; i++){
        cout << arr[i] << endl;
    }
    delete[] arr;

    return 0;
}