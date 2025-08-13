#include <iostream>
using namespace std;

int main(){
    long long a , b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    for(int i = -999; i < 1000; i++){
        for (int j = -999; j < 1000; j++){
            if((a*i + b*j - c ==0) && (d*i + e*j - f ==0)){
                cout << i << " " << j << endl;
                return 0;
            } 
        }
    }
}