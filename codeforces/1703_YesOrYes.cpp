#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string word;
    cin >> t;
    string result;
    for(int i = 0; i < t; i++){
        cin >> word;
        result = "NO";        
        if(
            word == "Yes" || word == "yEs" || word == "yeS" ||
            word == "YEs" || word == "yES" || word == "YeS" ||
            word == "yes" || word == "YES"            
            ){
            result = "YES";
        }
        cout << result << "\n";
    }
}