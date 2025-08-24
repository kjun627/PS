#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int trynum; 
    cin >>trynum;
    deque<int> de;

    for(int i = 0; i< trynum; i++){
        int cmd;
        cin >> cmd;

        if(cmd == 1){
            int x;
            cin >> x;
            de.push_front(x);
        }
        else if(cmd ==2){
            int x;
            cin >> x;
            de.push_back(x);
        }
        else if(cmd == 3){
            if(!de.empty()){
                int front = de.front();
                de.pop_front();
                cout << front << "\n";
                continue;
            }
            cout << -1 << "\n";
        }
        else if(cmd == 4){
            if(!de.empty()){
                int back = de.back();
                de.pop_back();
                cout << back << "\n";
                continue;
            }
            cout << -1 << "\n";
        }
        else if(cmd ==5){
            cout << de.size() << "\n";
        }
        else if(cmd == 6){
            int now;
            de.empty()? now =1 : now= 0;
            cout << now << "\n";
        }
        else if(cmd == 7){
            if(!de.empty()){
                int front = de.front();
                cout << front << "\n";
                continue;
            }
            cout << -1 << "\n";
        }
        else if(cmd == 8){
            if(!de.empty()){
                int back = de.back();
                cout << back << "\n";
                continue;
            }
            cout << -1 << "\n";
        }
    }
    return 0;
}