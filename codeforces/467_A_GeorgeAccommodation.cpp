#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, pi, qi, result=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> pi >> qi;
        result += (qi - pi >= 2);
    }
    cout << result << "\n";
}