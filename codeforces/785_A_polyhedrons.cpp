#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, faces=0;
    string poly;
    cin >> n;
    for(int i=0; i < n; i ++){
        cin >> poly;
        if(poly == "Tetrahedron"){
            faces = faces + 4; 
        }
        else if(poly == "Cube"){
            faces = faces + 6;
        }
        else if(poly == "Octahedron"){
            faces = faces + 8;
        }
        else if(poly == "Dodecahedron"){
            faces = faces + 12;
        }
        else if(poly == "Icosahedron"){
            faces = faces + 20;   //
        }
    }
    cout << faces << "\n";
}