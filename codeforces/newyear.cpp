#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
    int t; cin >> t;
    int h, m, past;
    for(int i= 0; i < t; i++){
        cin >> h >> m;
        past = h * 60 + m;
        cout << 1440 - past << "\n";
    }

    return 0;
}