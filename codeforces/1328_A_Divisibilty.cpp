#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int t, a, b, modulo=0, moves=0;
    vector<int> result;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        modulo = a % b;
        if(modulo){
            result.push_back(b - modulo);
        }
        else{
            result.push_back(modulo);
        }
    }
    for(int i = 0; i < t; i++){
        cout << result[i] << "\n";
    }
}