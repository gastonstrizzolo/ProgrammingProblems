#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, counter, p, v, t, i;
	n = 0; counter = 0; p = 0; v = 0; t = 0; i = 1;
    cin >> n;

    while(i <= n) {
        cin >> p >> v >> t;
        if(p + v + t >= 2){
            counter++;
        }
        i++;
    }

    cout << counter << endl;
}