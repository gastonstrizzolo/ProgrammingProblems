#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long n;
    cin >> n;
    if(n%2 == 0){
        cout << n/2 << "\n";
    }
    else{
        cout << (n-1)/2  - n << "\n";
    }
}