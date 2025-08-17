#include <iostream>
#include <set>
#include <unordered_set>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    unordered_set<string> a;
    int totalCount = 0;

    for (int i =0; i<n+m; i++){
        string sen;
        cin >> sen;

        if(i <n){
            a.insert(sen);
        }
        else{
            if(a.count(sen)){
                totalCount++;
            }
        }
    }

    cout << totalCount << "\n";
    return 0;
}