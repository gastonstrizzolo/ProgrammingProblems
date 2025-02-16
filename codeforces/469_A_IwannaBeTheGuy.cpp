#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, p_i, j, i = 0;
    bool flag = true;
    cin >> n;
    cin >> p;
    int levels[n+1];
    memset(levels, 0, sizeof(levels));
    for(; i < p; i++){
        cin >> p_i;
        if(levels[p_i] == 0){
            levels[p_i] = 1;
        }
    }
    cin >> p;
    for(i=0; i < p; i++){
        cin >> p_i;
        if(levels[p_i] == 0){
            levels[p_i] = 1;
        }

    }
    for(i=1; i < n + 1; i++){
//        cout << levels[i] << "\n";
        if(levels[i] == 0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "I become the guy." << "\n";
    }
    else{
        cout << "Oh, my keyboard!" << "\n";
    }
}