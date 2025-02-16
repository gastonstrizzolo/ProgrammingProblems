#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
    int n, a, b, current_price; cin >> n;
    string answer = "Poor Alex";
    vector < pair <int, int>> v;
    pair<int, int> laptop1, laptop2;
    for(int i= 0; i < n; i++){
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(), v.end());

    for(int i= 0; i < n; i++){
        for(int j= n-1; j < 0; j--){
            if(v[i].second > v[j].second){
                answer = "Happy Alex";
            }
        }
    }
    cout << answer << "\n";

    return 0;
}