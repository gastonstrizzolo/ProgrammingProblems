#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t, result="YES";
    cin >> s >> t;
    int n = s.length();
    for(int i=0; i < n; i++){
        if(s[i] != t[n-1-i]){
            result = "NO";
            break;
        }
    }
    cout << result << "\n";
}