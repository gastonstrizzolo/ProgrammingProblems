#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, points;
    char arrow;
    int reference[10][10] ={
                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},

                        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    
    cin >> t;
    for(int k=0; k < t; k++){
        points = 0;
        for(int i=0; i < 10; i++){
            for(int j=0; j < 10; j++){
                cin >> arrow;
                if(arrow == 'X'){
                    points = points + reference[i][j];
                }
            }
        }
        cout << points << "\n";
    }

}