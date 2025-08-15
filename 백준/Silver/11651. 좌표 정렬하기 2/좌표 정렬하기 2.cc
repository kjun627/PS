#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    vector<pair<int,int>> tree(num);

    for (int i = 0; i< num; i++){
        int num1, num2;
        cin >> num1 >> num2;
        tree[i].first = num2;
        tree[i].second = num1;
    }
    sort(tree.begin(), tree.end());

    for( const auto& p : tree){
        cout << p.second << " " << p.first << "\n";
    }
    return 0;
}