#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, games=0;
    cin >> n;
    int a[n], h[n];
    for(int i=0; i < n; i++){
        cin >> a[i] >> h[i];
    }
    for(int i=0; i < n; i++){
        for(int j=i; j < n; j++){
            games = games + (h[i] == a[j]) + (a[i] == h[j]);
//            cout << h[i] << "\t" << a[j] << "\n";
//            cout << a[i] << "\t" << h[j] << "\n";
//            cout << "\n";
//            if(h[i] == a[j]){
//                games = games + 1;
//            }
//            if(a[i]==h[j]){
//                games = games + 1;
//            }
        }
    }
    cout << games << "\n";
}