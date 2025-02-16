#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, total = 0;
    string current, next = "", s;

    cin >> n;
    cin >> s;

    for(int i=0; i < n-1; i++){
        current = s[i];
        next = s[i+1];
        if (current == next){
            total = total + 1;
        }
    }
    cout << total << "\n";
}
