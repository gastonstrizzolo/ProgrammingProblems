#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, moves, a_i, cant_2s, cant_1s;
    vector<int> a;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        moves = 0;
        cant_2s = 0;
        cant_1s = 0;
        for(int j=0; j< n; j++){
            cin >> a_i;
            a_i = a_i % 3;
            cant_2s = cant_2s + (a_i == 2);
            cant_1s = cant_1s + (a_i == 1);
        }
        cout << "cant_2s =" << cant_2s << "\n";
        cout << "cant_1s =" << cant_1s << "\n";
        if((cant_2s * 2 + cant_1s) % 3 == 0){
            moves = 0;
        }
        else if(((cant_2s - 1) * 2 + cant_1s) % 3 == 0){
            moves = 1;
        }
        else{
            moves = 2;
        }
        cout << moves << "\n";
        cout << "\n";
    }
}