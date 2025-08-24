#include <iostream>
#include <queue>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num == 1){
        cout << 1 << endl;
        return 0;
    }
    queue<int> q;
    bool drop = true;
    for(int i = 1; i<= num; i++){
        q.push(i);
    }
    while(q.size() > 1){
        if(drop){
            q.pop();
            drop = false;
        }
        else{
            int back = q.front();
            q.pop();
            q.push(back);
            drop = true;
        }
    }
    cout << q.front() << "\n";

    return 0;
}