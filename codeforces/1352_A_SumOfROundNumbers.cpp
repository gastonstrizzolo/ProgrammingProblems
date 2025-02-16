#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, rest, i;
    vector <pair<int, vector<int>>> answers;
    pair <int, vector<int>> summands;
    cin >> t;
    for(int i=0; i < t; i++){
        cin >> n;
        if(n < 10){
            answers.push_back(make_pair(1, n));
        }
        else{
            i = 0;
            rest = n % pow(10, i);
            if(rest != 0){

            }
        }
    }
}