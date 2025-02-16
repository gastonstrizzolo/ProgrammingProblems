#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
    string s;
    vector <int> v;
    while(cin >> s && s != "\n"){
        if(s != "+"){
            v.push_back(stoi(s));
        }
    }   
    sort(v.begin(), v.end());
    for(int i =0; i < v.size(); i++){
        cout << v[i];
        if(i != v.size() - 1){
            cout << "+";
        }
    }
}