#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    unordered_map<int, int> set;

    for (int i = 0; i<num; i++){
        int number;
        cin >> number;

        if(!set.count(number)){
            set[number] = 1;
        }
        else{
            set[number]++;
        }
    }

    cin >> num;
    for (int i = 0; i<num; i++){
        int number;
        cin >> number;
        if(!set.count(number)){
            cout << 0;
        }
        else{
            cout << set[number];
        }

        if(i != num-1){
            cout << " ";
        }
        else{
            cout << "\n";
        }
    }
    return 0;
}