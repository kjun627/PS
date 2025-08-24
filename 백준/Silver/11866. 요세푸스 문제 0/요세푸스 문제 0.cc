#include <iostream>
#include <queue>
using namespace std;

int main(){
    int num,k;
    cin >> num >> k; 
    queue<int> q;
    int* arr = new int[num];
    int index = 0;
    for(int i = 1; i<=num; i++){
        q.push(i);
    }
    while(q.size()> 0){
        int trynum = k;

        for(int i = 0; i<k; i++){
            if(i != k-1){
                int front = q.front();
                q.pop();
                q.push(front);
            }
            else{
                int front = q.front();
                q.pop();
                arr[index++] = front;
            }
        }
    }
    cout << "<";
    for( int i = 0; i<num; i++){
        if(i != num-1){
            cout << arr[i] << ", ";
            continue;
        }
        cout << arr[i] <<">" << "\n";
    }
    return 0;
}