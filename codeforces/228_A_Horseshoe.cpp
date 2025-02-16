#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> s;
    int s_i, uniques=0;
    for(int i=0; i < 4; i++){
        cin >> s_i;
        if(find(s.begin(), s.end(), s_i) != s.end()){
            uniques += 1;
        }
        s.push_back(s_i);
    }
    cout << uniques << "\n";
}