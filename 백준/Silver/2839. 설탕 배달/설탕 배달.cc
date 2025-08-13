#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int bongdari5 = 5;
    int bongdari3 = 3;

    int minimumBongdari = num;
    bool workfalse = true;

    for (int i = 0; i <= num/bongdari3; i++){
        int cost3 = i*bongdari3;
        int cost5 = 0;

        int nowKg = num - cost3;
        if((nowKg % bongdari5 == 0 || nowKg == 0)){
            if(nowKg != 0){
                cost5 = (num - cost3)/bongdari5;
            }
            
            workfalse = false;
        }
        else{
            continue;
        }

        if(cost5 + i <minimumBongdari){
            minimumBongdari = i + cost5;
        }
    }
    if(workfalse){
        cout << -1 << endl;
        return 0;
    }
    cout << minimumBongdari << endl;
    return 0;
}