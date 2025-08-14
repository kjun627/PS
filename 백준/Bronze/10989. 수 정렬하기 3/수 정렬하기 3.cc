#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    int arr[10001] = {0};

    for (int i = 0; i < num; i++){
        int x; 
        cin >> x;
        arr[x]++;
    }

    for (int i = 1; i <10001; i++){
        for( int j = 0; j < arr[i]; j++){
            cout << i << '\n';
        }
    }
    return 0;
}
