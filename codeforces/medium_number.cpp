#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
    int t, a, b, c;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;
        if(a > b){
            if(b > c){
                cout << b << "\n";
            }
            else{
                if(a < c){
                    cout << a << "\n";
                }
                else{
                    cout << c << "\n";
                }
            }
        }
        else{
            if(b > c){
                if(a < c){
                    cout << c << "\n";
                }
                else{
                    cout << a << "\n";
                }
            }
            else{
                cout << b << "\n";
            }
        }
    }
}