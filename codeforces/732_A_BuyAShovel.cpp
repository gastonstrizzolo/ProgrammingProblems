#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, r, shovels, minimum=1;
    cin >> k >> r;
    shovels = k;
    while(true){
        if(shovels % 10 == r || shovels % 10 == 0){
            break;
        }
        minimum = minimum + 1;
        shovels = shovels + k;
    }
    cout << minimum << "\n";
}