#include <bits/stdc++.h>
using namespace std;

int main(){	
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	int n, m, type, l, r, current;

    cin >> n;

    long long stones[n], stones_sorted[n];


    for(int i = 0; i < n; i++){
        
        cin >> current; 
        stones[i] = current;
        stones_sorted[i] = current;
    }

//    for(int i = 0; i < n; i++){
//        stones_sorted[i] = stones[i];
//    }
    sort(stones_sorted, stones_sorted + n);

    cin >> m;
    long long costs[m] = {0};

//    for(int i = 0; i < m; i++){
//        costs[i] = 0;   // initialize
//    }

    for(int i = 0; i < m; i++){
        cin >> type >> l >> r;
        if(type == 1){
            for(int j = l-1; j < r; j++){
                costs[i] = costs[i] + stones[j];
            }
        }
        else{
            for(int j = l-1; j < r; j++){
                costs[i] = costs[i] + stones_sorted[j];
            }
        }
        cout << costs[i] << endl;
    }

//    for(int i = 0; i < m; i++){
//    }
}
