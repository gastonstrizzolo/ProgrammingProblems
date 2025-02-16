#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int upper = 0, lower = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            upper = upper + 1;
        }
        else{
            lower = lower + 1;
        }
    }
    if(lower < upper){
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 97){
                s[i] = s[i] - 32;
            }
        }
    }
    else{
        for(int i = 0; i < s.length(); i++){
            if(s[i] < 97){
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << "\n";
}
