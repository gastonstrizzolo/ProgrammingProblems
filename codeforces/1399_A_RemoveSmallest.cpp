#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, diff_zeros, j;
    
    cin >> t;

    for(int i=0; i < t; i ++){
        cin >> n;
        vector<int> v;
        for(int j = 0; j < n; j ++){
            cin >> a;
            v.push_back(a);
        }
    
        sort(v.begin(), v.end());

        for(int j = 0; j < n; j ++){
            for(int k = j + 1; k <= n-1; k ++){
                if (v[k] - v[j] <= 1){
                    v[j] = 0;   // remove
                }
            }
        }

//        for(int j = 0; j < n; j ++){
//            cout << v[j] << "\t";
//        }
//
        diff_zeros = 1;
        j = 0;
        while(j < n && diff_zeros >= 0){
            if(v[j] != 0){
                diff_zeros = diff_zeros - 1;
            }            
            j = j + 1;
        }

        if(diff_zeros >= 0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }   
}