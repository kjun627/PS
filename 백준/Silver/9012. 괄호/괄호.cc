#include <iostream>
#include <string>
using namespace std;

int main(){
    int k = 0;
    cin >> k;
    for(int i = 0; i<k; i++){
        string test;
        cin >>test;
        int* stack = new int[test.length()];
        int top = -1;
        bool isAlright = true;
        for(int j = 0; j < test.length(); j++){
            if(!isAlright)break;
            switch (test[j]){
                case '(':
                    stack[++top] = test[j];
                    break;
                
                case ')':
                    if(top != -1){
                        char now = stack[top--];
                        if(now != '('){
                            cout << "NO" << "\n";
                            isAlright = false;
                            break;
                        }
                    }
                    else if(top ==-1){
                        cout << "NO" << "\n";
                        isAlright = false;
                        break;
                    }
            }
        }
        if(top == -1 && isAlright){
            cout << "YES" << "\n";
        }
        else if(top != -1 && isAlright){
            cout << "NO" << "\n";
        }
        
        delete[] stack;
    }
    return 0;
}