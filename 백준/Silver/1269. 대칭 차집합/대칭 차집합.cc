#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num1, num2;
    cin >> num1 >> num2;

    set<int> set1;
    set<int> set2;
    set<int> result1;
    set<int> result2;

    for (int i = 0; i<num1 + num2 ; i++){
        int number;
        cin >> number;

        if(i < num1){
            set1.insert(number);
        }
        else{
            set2.insert(number);
        }
    }

    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
    inserter(result1, result1.begin()));
    set_difference(set2.begin(), set2.end(), set1.begin(), set1.end(),
    inserter(result2, result2.begin()));

    cout << result1.size() + result2.size() << "\n";
    

    return 0;
}