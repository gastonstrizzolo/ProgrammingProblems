#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, pixel, i = 0, j = 0, color = 0;
    cin >> n >> m;
    while(i < n && color == 0){
        while(j < m && color == 0){
            cin >> pixel;
            color = color + (pixel == 'M' || pixel == 'Y' || pixel == 'C');
            j = j + 1
        }
        i = i + 1;
    }
    if (color){
        cout << "#Color" << "\n";        
    }
    else{
        cout << "#Black&White" << "\n";
    }
}