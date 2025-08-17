#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    unordered_set<long long> a;

    for (int i = 0; i< num; i++){
        long long number;
        cin >> number;
        a.insert(number);
    }

    int num2;
    cin >> num2;

    for(int i = 0; i < num2; i++){
        long long number;
        cin >> number;

        if(a.count(number)){
            cout << 1;
        }
        else{
            cout << 0;
        }

        if( i != num2 -1){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }
    return 0;
}