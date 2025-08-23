#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<int> q;
    string cmd;
    int num;
    cin >> num;

    for(int i = 0; i<num; i++){
        cin >> cmd;
        
        if(cmd == "push"){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(cmd == "front"){
            if(q.empty()){
                cout << -1 << "\n";
                continue;
            }
            int front = q.front();
            cout << front << "\n";
        }
        else if(cmd == "back"){
            if(q.empty()){
                cout << -1 << "\n";
                continue;
            }
            int back = q.back();
            cout << back << "\n";
        }
        else if(cmd == "size"){
            cout << q.size() << "\n";
        }
        else if(cmd == "empty"){
            int ex;
            q.empty() ? ex = 1 : ex = 0;
            cout << ex << "\n";
        }
        else if(cmd == "pop"){
            if(q.empty()){
                cout << -1 << "\n";
                continue;
            }
            int front = q.front();
            q.pop();
            cout << front << "\n";
        }
    }  
    return 0;  
}