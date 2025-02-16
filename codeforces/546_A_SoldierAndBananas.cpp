#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, w, n, total, k_dollars = 0;
    cin >> k >> n >> w;
    for(int i=1; i <= w; i++){
        k_dollars = k_dollars + k * i; 
    }
    total = (k_dollars > n) ? (k_dollars - n) : 0 ;
    cout << total << "\n";
}