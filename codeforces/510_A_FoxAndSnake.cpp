#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    char table[n][m];
    int side = 1;
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            if(i % 2 == 0){
                table[i][j] = '#';
            }
            else{
                if(j == m - 1 and side == 0){
                        table[i][j] = '#';
                        //side = 0;
                    }
                else if(j == m - 1 and side != 0){
                    table[i][j] = '.';
                    side = side - 1;
                }
                else if(j == 0 and side == 0){
                        table[i][j] = '#';
                        side = 2;
                    }
                else if(j == 0 and side != 0){
                    table[i][j] = '.';
                    side = side - 1;
                }
                else {
                    table[i][j] = '.';
                }

            }
        cout << table[i][j];
        }
        cout << "\n";
    }
}
