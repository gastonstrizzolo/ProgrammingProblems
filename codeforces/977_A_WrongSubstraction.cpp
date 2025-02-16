#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main(){
    int k, n;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        if (n % 10 == 0){
            n = n / 10;
        }
        else{
            n = n - 1;
        }
    }
    cout << n << "\n";
}