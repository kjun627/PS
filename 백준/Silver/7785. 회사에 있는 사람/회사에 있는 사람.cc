#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    set<string> company;
    for(int i = 0; i< num; i++){
        string name;
        string status;

        cin >> name >> status;

        if(status == "enter"){
            company.insert(name);
        }
        else{
            company.erase(name);
        }
    }

    for(auto i = company.rbegin(); i != company.rend(); ++i){
        cout << *i << "\n";
    }
    return 0;
}