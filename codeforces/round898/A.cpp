#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    for(int i=0; i < t; i++) {
        cin >> s;
        if(s[0] == 'a' && s[1] == 'b' && s[2] == 'c'){
            cout << "YES" << "\n";
        }
        else if(s[0] == 'b' && s[1] == 'a'){
            cout << "YES" << "\n";
        }
        else if(s[0] == 'c' && s[2] == 'a'){
            cout << "YES" << "\n";
        }
        else if(s[1] == 'c' && s[2] == 'b'){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }   
}