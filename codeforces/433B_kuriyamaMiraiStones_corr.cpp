#include <bits/stdc++.h>
// #define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n; cin >> n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	ll sump[n+1];
	sump[0] = 0;
	for(int i=0; i<n; i++){
		sump[i+1] = sump[i] + a[i];
	}
	sort(a, a+n);
	ll sump2[n+1];
	sump2[0] = 0;
	for(int i=0; i<n; i++){
		sump2[i+1] = sump2[i] + a[i];
	}

	int m; cin>>m;
	while(m--){
		int ty, l, r; 
        cin>>l>>r;
		l--; r--;
		if(ty==1){
			cout << sump[r+1] - sump[l] << "\n";
		}
		else{
			cout << sump2[r+1] - sump2[l] << "\n";
		}
	}
}
