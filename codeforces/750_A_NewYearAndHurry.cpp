#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, time_past=0, i=1, contests=0;
    cin >> n >> k;
    while(true and contests < n){
        if(time_past + 5 * i > 240 - k){
            break;
        }
        contests = contests + 1;
        time_past = time_past + 5 * i;
        //cout << time_past << "\n";
        i = i + 1;
    }
    cout << contests << "\n";
}