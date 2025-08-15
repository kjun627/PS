#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int num;
    cin >> num;

    vector<string> arr;
    for (int i = 0; i<num; i++){
        string str;
        bool isAlready = false; 
        
        cin >> str;
        for (int j = 0; j< arr.size(); j++){
            if(str == arr[j]){
                isAlready = true;
            }
        }
        if(!isAlready){
            arr.push_back(str);
        }
        
    }
    
    sort(arr.begin(), arr.end(),
    [](const string& a, const string& b){
        if(a.length() != b.length()){
            return a.length() < b.length();
        }
        
        return a < b;
    });

    for (int i = 0; i<arr.size(); i++){
        cout << arr[i] << "\n";
    }
    return 0;
}