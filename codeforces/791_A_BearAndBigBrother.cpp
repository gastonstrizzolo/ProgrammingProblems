#include <bits/stdc++.h>
using namespace std;

int main(){
    int limak, bob, years = 0;
    cin >> limak >> bob;
    bool isHeavier = false;
    while (!isHeavier){
        limak = limak * 3;
        bob = bob * 2;
        if (limak > bob){
            isHeavier = true;
        }
        years = years + 1;
    }
    cout << years << "\n";
}