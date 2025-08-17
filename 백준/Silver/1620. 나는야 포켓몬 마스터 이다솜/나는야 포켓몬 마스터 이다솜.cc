#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m;
    cin >> n >> m;
    vector<string> diction1(n+1);
    unordered_map<string, int> diction2;

    for (int i = 1; i <= n; i++){
        string name;
        cin >> name;

        diction1[i] = name;
        diction2[name] = i;
    }

    for (int i = 0; i<m; i++){
        string condition;
        cin >> condition;

        if(condition[0] >= '0' && condition[0] <= '9'){
            int num = stoi(condition);
            cout << diction1[num] << "\n"; 
        }
        else{
            cout << diction2[condition] << "\n";
        }
    }

    return 0;
}