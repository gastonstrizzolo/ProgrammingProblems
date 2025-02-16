#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
    int n, m, x, value;
    vector<int> a, q;
    a.push_back(0);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        value = int(x) + a[i - 1];
        a.push_back(value);
    }

//    for(int i = 0; i <= n; i++){
//        cout << i << "\t" << a[i] << "\n";
//    }

    cin >> m;
//    cout << "a[n/2] = " << a[n/2] << "\n";
    for(int i = 0; i < m; i++){
        cin >> x;
        if(x >= a[n/2]){
            for(int j = n; j >= (n/2); j--){
//                cout << x << "\t" << j << "\t" << a[j] << "\n";
                if(x > a[j-1]){
                    cout << j << "\n";
                    break;
                }
            }
        }
        else{
            for(int j = 1; j <= (n/2); j++){
//                cout << x << "\t" << a[j] << "\n";
                if(x <= a[j]){
                    cout << j << "\n";
                    break;
                }
            }
        }
    }
}