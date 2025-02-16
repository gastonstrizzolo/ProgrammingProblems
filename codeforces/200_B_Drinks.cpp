#include <bits/stdc++.h>
using namespace std;

int main(){
    float p_i, acc, divisor;
    int n;
    cin >> n;
    divisor = 0 + n;
    for(int i=0; i < n; i++){
        cin >> p_i;
        acc = acc + p_i;
    }
    cout << acc/divisor << "\n";
}