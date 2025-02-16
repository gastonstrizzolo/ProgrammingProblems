#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n, total = 0;
	cin >> m >> n;
    
    // odd case
    if (m % 2 != 0 && n != 0){
            total = n * (m / 2) + n / 2;
    }
    // even case
    else if (m % 2 == 0 && n % 2 == 0){
        total = n * (m / 2);
    }
    // even and odd cases
    else if (m % 2 != 0 && n % 2 == 0){
        total = m * (n / 2);
    }
    else {
        total = n * (m / 2);
    }

    cout << total << endl;
}