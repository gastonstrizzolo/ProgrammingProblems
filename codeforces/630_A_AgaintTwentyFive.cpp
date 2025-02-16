#include <bits/stdc++.h>
using namespace std;


int main(){
    unsigned long long n, result=5;
    int i=1;
    cin >> n;
    while(i < n){
        result = result * 5;
        i = i + 1;
        cout << result  << "\n";
    }
}
