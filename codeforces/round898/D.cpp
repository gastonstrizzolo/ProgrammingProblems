#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, i, j, operations;
    string s;

    cin >> t;
    for(int h = 0; h < t; h++){
        cin >> n >> k;
        i = 0;
        while(i < n){
            cin >> s[i]; 
            i = i + 1;
        }

        i = 0;
        operations = 0;
        
        while(i < n){
            if(s[i] == 'B'){
                j = 0;
                while(j < k){
                    s[i + j] = 'W';
                    j = j + 1;
                }
                operations = operations + 1;
                i = i + k;
            }
            else{
                i = i + 1;
            }
        }
        cout << operations << "\n";
    }
}