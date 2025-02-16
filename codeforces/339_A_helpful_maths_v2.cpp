#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, result_string="";
    int ones=0, twos=0, threes=0;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if (s[i] == '1'){
            ones = ones + 1;
        }
        else if (s[i] == '2'){
            twos = twos + 1;
        } 
        else if (s[i] == '3'){
            threes = threes + 1;
        } 
    }
    for(int i=0; i < ones;i++){
        result_string.append("1");
        result_string.append("+");

    }
    for(int i=0; i < twos;i++){
        result_string.append("2");
        result_string.append("+");
    }
    for(int i=0; i < threes;i++){
        result_string.append("3");
        result_string.append("+");
    }
    result_string.pop_back();
    cout << result_string << "\n";
}
