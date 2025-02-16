#include <bits/stdc++.h>
using namespace std;


int main(){
    unsigned int a, b, c, x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int zero = 0;
    bool solved = false;
    while(!solved){
        a = x1 / 2;
        b = x1 / 2;
        while(a + b != x1){
            a = a + (zero == 0);
            b = b + (zero == 1);
            zero = (zero == 0);
        }
    }
}