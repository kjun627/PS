#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>

using namespace std;

int main(){
    int num;
    cin >> num;
    vector<tuple<int, string, int>> manage(num);

    for (int i = 0; i < num; i++){
        int age;
        string name;

        cin >> age >> name;
        get<0>(manage[i]) = age;
        get<1>(manage[i]) = name;
        get<2>(manage[i]) = i;
    }

    sort(manage.begin(), manage.end(),
    [] (const tuple<int,string, int>&a ,
         const tuple<int, string, int>& b){
            if(get<0>(a) != get<0>(b)){
                return get<0>(a) < get<0>(b);
            }
            return get<2>(a) < get<2>(b);
         });

    for (int i =0; i< num; i++){
        cout << get<0>(manage[i]) << " " << get<1>(manage[i]) << "\n";
    }
    return 0;

}