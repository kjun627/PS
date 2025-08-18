#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string sen;
    cin >> sen;

    set<string> set1;

    for (int i = 0; i<sen.size(); i++){
        for(int j = 0; j<sen.size(); j++){
            string partSen = sen.substr(i,j);
            if(!set1.count(partSen)){
                set1.insert(partSen);
            }
        }
    }
    cout << set1.size() << "\n";
    return 0;
}