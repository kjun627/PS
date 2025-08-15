#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int num;
    cin >> num;
    vector<int> arr;
    vector<int> copy;
    for (int i = 0; i< num; i++){
        int number;
        bool isAlready =false;
        cin >> number;
        arr.push_back(number);
        
    }
    copy = arr;
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    
    for(int i = 0; i <num; i++){
        int index = lower_bound(arr.begin(), arr.end(), copy[i]) - arr.begin();
        cout << index << " ";
    }

    cout << "\n";
    return 0;
}