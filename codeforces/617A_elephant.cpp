#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, resto, cociente, resultado = 0;
    cin >> x;
    for(int i=5; i >= 1; i--){
        cociente = x / i;
        resultado = resultado + cociente;
        x = x % i;
    }
    cout << resultado << "\n";
}
