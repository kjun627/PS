#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string str = "ENTER";
    set <string> user;

    int total = 0;
    int num;
    cin >> num;

    for(int i = 0; i< num; i++){
        string str2;
        cin >> str2;

        if(str == str2) {
            total += user.size(); 
            user.clear();
            continue;
        }
        user.insert(str2);
    }

    cout << total+user.size() << endl;

    return 0;
}