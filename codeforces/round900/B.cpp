#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, a, most_frequent;
    bool found = false;
    cin >> t;

    for(int k = 0; k < t; k++){
        cin >> n >> k;
        int array[n];

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }
        sort(array, array + n);
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n-1; j++){
                
                int max_count = 1, res = array[i], curr_count = 1;
                for (int h = i; h <= j; h++) {
                    if (array[h] == array[h - 1])
                        curr_count++;
                    else
                        curr_count = 1;

                    if (curr_count > max_count) {
                        max_count = curr_count;
                        res = array[i - 1];
                    }
                }
                if(res == k){
                    found = true;
                    goto stop;
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