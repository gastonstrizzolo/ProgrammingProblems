#include <bits/stdc++.h>
using namespace std;

int main(){
    string magnet_i;
    char last;
    int n, groups = 1;
    cin >> n;
    cin >> magnet_i;
    last = magnet_i[1];
    for(int i=0; i < n-1; i++){
        cin >> magnet_i;
        if(magnet_i[0] == last){
            groups = groups + 1;
        }
        last = magnet_i[1];
    }
    cout << groups << "\n";
}