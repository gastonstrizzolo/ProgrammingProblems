#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p_i, friends[n + 1];
    for(int i=1; i <= n; i++){
        cin >> p_i;
        friends[p_i] = i;
    }
    for(int i=1; i <= n; i++){
        cout << friends[i] << "\t";
    }
}