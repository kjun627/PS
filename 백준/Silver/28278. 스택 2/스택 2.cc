#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int commandCount = 0;
    cin >>commandCount;

    int* stack = new int[commandCount];
    int top = -1;

    for (int i = 0; i< commandCount; i++){
        int command;
        cin >> command;
        switch(command){
            case 1:
                int x;
                cin >> x;
                stack[++top] = x;
                break;
            case 2:
                if(top != -1){
                    cout << stack[top--] << "\n";
                    break;
                }

                cout << -1 << "\n";
                break;
            case 3:
                cout << top+1 << "\n";
                break;
            case 4:
                if(top == -1){
                    cout << 1 << "\n";
                    break;
                }
                else{
                    cout << 0 << "\n";
                    break;
                }
            case 5:
                if(top != -1){
                    cout << stack[top] << "\n";
                    break;
                }
                cout << -1 << "\n";
                break;
        }
    }

    delete[] stack;
    return 0;
}