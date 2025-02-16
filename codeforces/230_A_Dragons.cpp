#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
    int s, n, x, y;
    vector<pair<int, int>> v;
    string won = "YES";
    cin >> s >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << "s --> " << s << "\n";
        if(s <= v[i].first){
            won = "NO";
            break;
            }
        else{
            s = s + v[i].second;
        }
    }
    cout << won << "\n";
}
