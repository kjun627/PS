#include <iostream>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    char arr[50][50];
    int wrongCount1 = 0;
    int wrongCount2 = 0;
    int minimumFix = 9999;

    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    int GaroEndIndex = 7;
    int SeroEndIndex = 7;
    

    while((GaroEndIndex < n && SeroEndIndex < m)){
                
        for(int i = GaroEndIndex - 7; i <= GaroEndIndex; i++){
            for (int j = SeroEndIndex - 7; j <= SeroEndIndex; j+=2){
                if(i % 2 == 0){
                    char c1 = 'B';
                    char c2 = 'W';
                    
                    // 짝수번째 0번이 B로 시작하는 케이스
                    if(c1 != arr[i][j]){
                        wrongCount1++;
                    }
                    if(c2 != arr[i][j+1] && j+1 <= SeroEndIndex){
                        wrongCount1++;
                    }

                    // 짝수번째 0번이 W로 시작하는 케이스
                    if(c2 != arr[i][j]){
                        wrongCount2++;
                    }
                    if(c1 != arr[i][j+1] && j+1 <= SeroEndIndex){
                        wrongCount2++;
                    }
                }
                else if(i % 2 != 0){
                    char c1 = 'B';
                    char c2 = 'W';

                    if(c2 != arr[i][j]){
                        wrongCount1++;
                    }
                    if(c1 != arr[i][j+1] && j+1 <= SeroEndIndex){
                        wrongCount1++;
                    }

                    if(c1 != arr[i][j]){
                        wrongCount2++;
                    }
                    if(c2 != arr[i][j+1] && j+1 <= SeroEndIndex){
                        wrongCount2++;
                    }
                }
            }
        }
        if (wrongCount1 >= wrongCount2){
            if(minimumFix >= wrongCount2){
                minimumFix = wrongCount2;
            }
        }
        if (wrongCount1 < wrongCount2){
            if(minimumFix > wrongCount1){
                minimumFix = wrongCount1;
            }
        }
        wrongCount1 = 0;
        wrongCount2 = 0;

        SeroEndIndex++;
        if(SeroEndIndex  == m){
            GaroEndIndex++;
            SeroEndIndex=7;
            if(GaroEndIndex >= n){
                break;
            }
        }
    }
    cout << minimumFix << endl;
    return 0;
}