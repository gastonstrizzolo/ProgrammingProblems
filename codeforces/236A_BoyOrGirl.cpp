#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
    string username;
    char c;
    char exists;
    cin >> username;
    int length = username.length();
    vector<char> characters;

    for(int i=0; i < length; i++){
        c = username[i];
        if(std::find(characters.begin(), characters.end(), c) == characters.end()){
            characters.push_back(c);
        }
    } 
    if(characters.size() % 2 == 0){
        cout << "CHAT WITH HER!" << "\n";
    }
    else{
        cout << "IGNORE HIM!" << "\n";
    }
}