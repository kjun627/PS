#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    unsigned int max = 0;
    unsigned int min = 0;

    unsigned int* ptr = new unsigned int[number];

    for(int i = 0; i < number; i++){
        unsigned int a;
        cin >> a;
        
        if(max <= a || i == 0){
            max = a;
            // cout << max << endl;
        }
        if(min >= a || i== 0){
            min  = a;
            // cout << min << endl;
        }
    }

    cout << min * max << "\n";
    return 0;
}
    