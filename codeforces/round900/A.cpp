#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, a, most_frequent;
    bool found = false;
    cin >> t;
    int index[100];
    for(int k = 0; k < t; k++){
        memset(index, 0, sizeof(index));
        cin >> n >> k;
        found = false;
        int array[n];
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n - 1; j++){
                index[array[j] - 1] += 1;
            }
            
            most_frequent = *max_element(index, index + 100) == k;
            for(int h=0; h < 100; h++){
                if(index[h] == most_frequent){
                    if(h == k){
                        found = true;
                        goto stop;
                    }
                }
            }
        }
        stop:
        if(found){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
            }
    }
}