#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, j, coins0, coins1;
    string s;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> s;
        j = 1;
        coins0 = 0; coins1=0;
        while(j < s.length() - 3){

            if(s[j-1] == 'A' && s[j]== 'B'){
                coins0 = coins0 + 1;
            }
            if(s[j-1] == 'B' && s[j]== 'A'){
                coins1 = coins1 + 1;    
            }
            j = j + 2;
        }
        cout << max(coins0, coins1) << "\n";
    }
}