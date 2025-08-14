#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num; 
    vector<pair<int, int>> tree(num);
    for (int i = 0; i<num; i++){
        cin >> tree[i].first >> tree[i].second;
    } 
    sort(tree.begin() , tree.end());
    
    for (const auto& p :tree){
        cout << p.first << " " << p.second << "\n";
    }
    return 0;
}