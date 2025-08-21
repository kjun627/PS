#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int target = 1;
    stack<int> line;

    int number;
    cin >> number;

    for (int i = 0; i< number; i++){
        int person;
        cin >> person;

        while(!line.empty() && target == line.top()){
            // cout << "line pop : " <<line.top();
            line.pop();
            target++;
        }

        if(target == person){
            target++;
            // cout << "target == person : " << person << endl;
            continue;
        }
        else if(target != person){
            // cout << "push : " << person << endl;
            line.push(person);
        }
    }

    while(!line.empty() && line.top() == target){
    line.pop();      
    target++;        
}
    if(target == number+1){
        cout << "Nice" << endl;
    }
    else{
        cout << "Sad" << endl;
    }

    return 0;
}