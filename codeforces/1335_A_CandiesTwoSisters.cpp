#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    unsigned long j, k;
    cin >> t;
    unsigned long result[t];
    memset(result, 0, sizeof(result));
    for(int i=0; i < t; i ++){
        cin >> n;
        for(j=1; j < n; j++){   // b
            k = n - 1;
            for(; k >= (n/2); k--){   //a
                if(j + k == n){
                    result[i] = result[i] + 1;
                    cout << i << "\t" << result[i] << "\n";
                }
            }
//        else{
//            k = n - 1;
//            for(;k > j; k--){   //a
//                if(j + k == n){
//                    result[i] = result[i] + 1;
//                    cout << i << "\t" << result[i] << "\n";
//                }
//            }
//
//        }
        }
        cout << result[i] << "\n";
    }
//    for(int i=0; i < t; i ++){
//    }
}