#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, diff_socks=0, days=0;
    cin >> a >> b;
    while(a >=1 && b >=1){
        diff_socks = diff_socks + 1;
        a = a - 1;
        b = b - 1;
    }
    while(a + b >= 2){
        days = days + 1;
        if(a >=1 && b >=1){
            a = a - 1;
            b = b - 1;
        }
        else if(a >= 2 && b == 0){
            a = a - 2;
        }
        else if(a == 0 && b >= 2){
            b = b -2;
        }
    }
    cout << diff_socks << "\t" << days << "\n";
}