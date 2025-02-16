#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b, result="";
    cin >> a >> b;
    for(int i=0; i < a.length(); i++){
        //const char c = ((a[i] - '0') ^ (b[i] - '0')) + '0';
        
        result += to_string(a[i] ^ b[i]);
    }
    cout << result << "\n";
}