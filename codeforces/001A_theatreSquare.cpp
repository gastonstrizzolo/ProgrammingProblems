#include <bits/stdc++.h>
using namespace std;

    /*      n
         -------
        |       | m
        |       |
        |       |
         -------
    */

int main(){
    long long n, m, a, res;
    cin >> n >> m >> a;

    if (n <= m && m <= a){
        res = 1;
    }
    else{
        long long length = n / a;
        long long widht = m / a;
        cout << length << widht << endl; 
    }

//    cout << res << endl;
}