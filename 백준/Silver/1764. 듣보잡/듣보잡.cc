#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num1, num2;
    cin >> num1 >> num2;

    set<string> set1;
    set<string> set2;
    set<string> result;
    for (int i = 0; i<num1; i++){
        string name1;
        cin >> name1;
        set1.insert(name1);
    }
    for (int i = 0; i<num2; i++){
        string name;
        cin >> name;
        set2.insert(name);
    }

    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
    inserter(result, result.begin()));

    cout << result.size() << "\n";
    for (string name : result){
        cout << name << "\n";
    }
    return 0;
}