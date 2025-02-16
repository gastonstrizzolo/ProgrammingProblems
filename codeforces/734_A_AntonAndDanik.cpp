#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n, a=0, d=0;
    cin >> n;
    cin >> s;
    for(int i=0; i < n; i++){
        if(s[i] == 'A'){
            a = a + 1;
        }
        else{
            d = d + 1;
        }
    }
    if(a == d){
        cout << "Friendship" << "\n";
    }
    else if (a < d)
    {
        cout << "Danik" << "\n";
    }
    else {
        cout << "Anton" << "\n";
    }
}