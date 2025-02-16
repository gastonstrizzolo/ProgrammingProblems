#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
    int x, answer, column, row;
    for(int i=0; i < 25; i++){
            cin >> x;
            if(x){
                row = (i / 5);
                column = (i % 5);
                answer = abs(2 - column) + abs(2 - row);
            }
        }
    cout << answer << "\n";
}