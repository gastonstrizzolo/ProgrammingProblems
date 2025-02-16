#include <bits/stdc++.h>
// #define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int i = 0;
    string phrase = "";
    while(i < n){
        if(i % 2 ==0){
            if(i == n-1){
                phrase.append("I hate it ");
            }
            else{
                phrase.append("I hate that ");
            }
        }
        else{
            if(i == n-1){
                phrase.append("I love it ");
            }
            else{
                phrase.append("I love that ");
            }
        }
        i++;
    }

    cout << phrase;
}