#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main(){
    int n, i;
    bool easy=true;
    cin >> n;
    for(int j=0; j<n; j++){
        cin >> i;
        if(i == 1){
            cout << "HARD" << "\n";
            easy = false;
            break;
        }
    }
    if(easy){
        cout << "EASY" << "\n";
    }
}
