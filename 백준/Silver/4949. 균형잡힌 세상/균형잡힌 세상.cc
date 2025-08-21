#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        string test;
        getline(cin, test);  
        
        char* stack = new char[test.length()];
        int top = -1;
        bool isAlright = true;
        if(test[0] == '.'){
            break;
        }
        for(int j = 0; j < test.length(); j++){
            if(!isAlright|| test[j] == '.')break;
            if(!(test[j] == '(' || test[j] ==')'|| test[j] == '['||test[j]==']')){
                continue;
            }
            switch (test[j]){
                case '(':
                    stack[++top] = test[j];
                    break;
                case '[':
                    stack[++top] = test[j];
                    break;
                case ')':
                    if(top != -1){
                        char now = stack[top--];
                        if(now != '('){
                            cout << "no" << "\n";
                            isAlright = false;
                            top =-1;
                            break;
                        }
                        break;
                    }
                    else if(top ==-1){
                        cout << "no" << "\n";
                        isAlright = false;
                        top = -1;
                        break;
                    }
                    break;
                case ']':
                    if(top != -1){
                        char now = stack[top--];
                        if(now != '['){
                            cout << "no" << "\n";
                            isAlright = false;
                            top = -1;
                            break;
                        }
                        break;
                    }
                    else if(top ==-1){
                        cout << "no" << "\n";
                        isAlright = false;
                        top = -1;
                        break;
                    }
                    break;
            }
        }
        if(top == -1 && isAlright){
            cout << "yes" << "\n";

        }
        else if(top != -1 && isAlright){
            cout << "no" << "\n";
        }
        
        delete[] stack;
    }
    return 0;    
}
    
