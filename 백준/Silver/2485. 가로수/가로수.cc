#include <iostream>
using namespace std;
long long int gcd(long long int a, long long int b){
    return b== 0? a : gcd(b, a%b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    long long int* arr1 = new long long int[num];

    for (int i = 0; i< num; i++){
        cin >> arr1[i];
    }
    long long int* arr2 = new long long int [num-1];
    for(int i = 0; i< num-1 ; i++){
        arr2[i] = arr1[i+1] - arr1[i];
    }
    
    long long int result = arr2[0];
    for(int i = 1; i<num-1; i++){
        result = gcd(result, arr2[i]);
        if(result == 1){
            
            break;
        }
    }


    int newTree = 0;
    for(int i = 0; i<num-1; i++){
        if(arr2[i]/result == 1)continue;
        
        newTree += (arr2[i]/result) -1;
    }

    cout << newTree << "\n";

    return 0;
    
}