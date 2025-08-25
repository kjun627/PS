#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main(){
    int num;
    cin >> num;
    deque<pair<int,int>> de;
    int* arr = new int[num];
    int index=0;
    if(num ==1){
        cout << 1 << "\n";
        return 0;
    }

    for(int i = 1; i<=num; i++){
         int number;
         cin >> number;
        de.push_back({i, number});
    }
    
    auto val = de.front();
    de.pop_front();
    arr[index++] = val.first;
    int value = val.second;
    
    for(int i =0; i<num-1; i++){

        while(de.size() > 0){
            if(value > 0){
                auto val  = de.front();
                de.pop_front();                
                
                if(val.second){
                    value--;
                    if(value == 0){
                    // cout << "array store : " << val.first << endl;
                    arr[index++] = val.first;
                    value = val.second;
                    continue;
                    }
                }
                
                de.push_back(val);
            }
            else{
                auto val  = de.back();
                de.pop_back();                
                if(val.second){
                    value++;
                    if(value == 0){
                        // cout << "array store : " << val.first << endl;
                        arr[index++] = val.first;
                        value = val.second;
                        continue;
                    }
                }
                de.push_front(val);
            }
            
        }
    }
    for(int i = 0; i<num; i++){
        
        cout << arr[i];
        if(i+1 == num){
            cout << "\n";
        }       
        else{
            cout << " ";
        }
    }
    return 0;
}