#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a_i, total;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        total = 0;
        for(int j = 0; j < n; j++){
            cin >> a_i;
            total = total + abs(a_i);
        }
        cout << total << "\n";
    }
}