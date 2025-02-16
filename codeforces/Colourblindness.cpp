#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
    int t; cin >> t;
    int n;
    string answer[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        string first, second;
        cin >> first;
        cin >> second;
        answer[i] = "YES";
        for(int j = 0; j < n; j++){
            if (first[j] == 'R'){
                if(second[j] != 'R'){
                    answer[i] = "NO";
                    break;
                }
                else{
                    continue;
                }
            }
            else if (first[j] == 'B' || first[j] == 'G'){
                if(second[j] == 'R'){
                    answer[i] = "NO";
                    break;
                    }
                else{
                    continue;
                    }
                }
            }
            cout << answer[i] << "\n";
        }
}