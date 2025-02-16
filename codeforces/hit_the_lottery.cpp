#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
    ll n;
    int min = 0, cociente, resto;
    cin >> n;
    int monedas[5] = {100, 20, 10, 5, 1};

    for(int i = 0; i < 5; i++){
        cociente = n / monedas[i];
        resto = n % monedas[i];
        min = min + cociente;
        n = resto;
    }
    cout << min << "\n";
}