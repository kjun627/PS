#include <iostream>
#include <string>
using namespace std;

int main(){
    string number;
    cin >> number;

    int len = number.length();
    
    int* arr = new int[len];
    for (int i = 0; i<len; i++){
        char s = number[i];
        arr[i] = s - '0';
    } 
    int count = len;
    for (int i = 0; i < count-1; count--){
        for (int j = 0; j < count-1; j++){
            if(arr[j]< arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i<len; i++){
        cout << arr[i];  
        if(i == len-1){
            cout << endl;
        }
    } 
    delete[] arr;

    return 0;
}