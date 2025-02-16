#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, max_product, min_gift;
    cin >> t;
    for(int i=0; i < t; i ++){
        cin >> n;
        int gifts[n];
        min_gift = 11;
        for(int j=0; j < n; j++){
            cin >> gifts[j];
            if(gifts[j] <  min_gift){
                min_gift = gifts[j];
            }
        }
//        cout << "min is " << min_gift << "\n";
        max_product = 1;    
        for(int j=0; j < n; j++){
            if(gifts[j] == min_gift){
//                cout << "adentro! con " << gifts[j] << "\n";
                gifts[j] = gifts[j] + 1;
                min_gift = -1;
            }
            max_product = max_product * gifts[j];

        }
        cout << max_product << "\n";
    }   
}