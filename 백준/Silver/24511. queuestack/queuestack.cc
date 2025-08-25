#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> q;
    stack<int> st;
    bool isQueExit = false;
    int num;
    cin >> num;
    // 자료구조 개수

    int* arr = new int[num];

    for(int i = 0; i< num; i++){
        int status;
        cin >> status;
        arr[i]=status;
        if(status ==0){
            isQueExit = true;
        }
    }

    for(int i = 0; i< num; i++){
        int number;
        cin >> number;

        if(arr[i] == 0){
            q.push_front(number);
        }
        else{
            st.push(number);
        }
    }

    int count;
    cin >> count;
    for(int i = 0; i<count; i++){
        int number;
        cin >> number;
        if(isQueExit){
            q.push_back(number);
            int now = q.front();
            q.pop_front();
            cout << now << " ";
        }
        else{
            st.push(number);
            int now = st.top();
            st.pop();
            cout << now << " ";
        }
    }
    cout << "\n";
    return 0;
}