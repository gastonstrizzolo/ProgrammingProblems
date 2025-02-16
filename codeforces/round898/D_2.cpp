#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, i, j, operations;
    bool operating;
    char letter;

    cin >> t;
    for(int h = 0; h < t; h++){
        cin >> n >> k;
        i = 1;
        operations = 0;
        cin >> letter;
        while(i < n){
            cout << i << "\t" << letter << "\n";
            if(letter == 'B'){
                operations = operations + 1;
                j = 0;
                while(j < k && i+j < n){
                    cin >> letter;
                    j = j + 1;
                }
                i = i + j;           
            }
            else{
                i = i + 1;
            }
            cin >> letter;
        }
        cout << operations << "\n";
    }
}