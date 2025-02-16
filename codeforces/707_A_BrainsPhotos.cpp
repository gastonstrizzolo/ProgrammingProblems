#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i = 0, j = 0, color = 0;
    char pixel;
    cin >> n >> m;
    while(i < n && color == 0){
        j = 0;
        while(j < m && color == 0){
            //cout << "adentro! "  << "\n";
            cin >> pixel;
            color = color + (pixel == 'M' || pixel == 'Y' || pixel == 'C');
            //cout << "pixel: " << pixel << "\n";
            //cout << i << j << "\n";
            //cout << "color:" << color << "\n" << "\n";
            j = j + 1;
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