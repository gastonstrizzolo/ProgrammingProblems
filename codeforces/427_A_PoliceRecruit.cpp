#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, event, officer_free=0, crimes=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> event;
        if(event > 0){
            officer_free = officer_free + event;
        }
        else{
            if(abs(event) > officer_free){
                crimes = crimes + abs(event) - officer_free;
            }
            officer_free = max(0, officer_free - abs(event));
        }
    }
    cout << crimes << "\n";
}