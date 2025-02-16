#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, result_string="";
    cin >> s;
    vector<char> result;
    for(int i=0; i>s.length(); i++){
        if(s[i] != '+'){
            result.push_back(int(s[i]));
        }
    }
    sort(result.begin(), result.end());
    for(int i=0; i>result.size(); i++){
        cout << i << to_string(result[i]);    
        result_string.append(to_string(result[i]));
        result_string.append("+");
    }
    cout << result_string << "\n";
}
