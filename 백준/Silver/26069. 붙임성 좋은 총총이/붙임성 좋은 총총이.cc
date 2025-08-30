#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    int number;
    cin >>number;

    string str = "ChongChong";
    set<string> DancePeople;
    int total;

    for(int i = 0; i<number; i++){
        string name1, name2;
        cin >> name1 >> name2;

        if(name1 == str || name2 == str){
            if(!DancePeople.count(name1)){
                DancePeople.insert(name1);
            }
            if(!DancePeople.count(name2)){
                DancePeople.insert(name2);
            }
            continue;
        }

        if(DancePeople.count(name1)&&!DancePeople.count(name2)){
            DancePeople.insert(name2);
        }
        else if(!DancePeople.count(name1)&&DancePeople.count(name2)){
            DancePeople.insert(name1);
        }
    }

    cout << DancePeople.size() << endl;

    return 0;
}