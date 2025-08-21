#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;

    int* stack = new int [k];
    int top = -1;
    for (int i = 0; i< k; i++){
        int cmd;
        cin >> cmd;

        if(cmd != 0){
            stack[++top] = cmd;
        }
        else{
            if(top != -1)top--;
        }
    }

    int sum = 0;
    for ( int i = 0; i <= top; i++ ){
        sum += stack[i];
    }
    cout << sum << "\n";

    delete[] stack;
    return 0;
}