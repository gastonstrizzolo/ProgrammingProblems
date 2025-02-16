#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n, amazings_count=0, score, min_score, max_score;
    cin >> n;
    cin >> score;
    min_score = score;
    max_score = score;

    for(int i=1; i < n; i++){
        cin >> score;
        if(score > max_score){
            max_score = score;
            amazings_count += 1; 
        }
        else if(score < min_score){
            min_score = score;
            amazings_count += 1; 
        }
    }
    cout << amazings_count << "\n"; 
}