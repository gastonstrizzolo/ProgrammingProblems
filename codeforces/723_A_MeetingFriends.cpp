#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3, distance=0;
    int points[3];
    cin >> points[0] >> points[1] >> points[2];
    sort(points, points + 3);
    distance = (points[1] - points[0]) + (points[2] - points[1]);
    cout << distance << "\n"; 
}
 
 
//    cout << points[0] << points[1] << points[2] << "\n";