#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, c;
    bool result;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;
        result = (a + b == c) || (a + c == b) || (b + c == a);
        if(result){
            cout << "YES" << "\n";
        } 
        else{
            cout << "NO" << "\n";
        }
    }
}