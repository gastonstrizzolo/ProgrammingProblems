#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l, abbr_num;
    cin >> n;
    string word, abbr, result[n];
    for(int i=0; i < n; i++){
        cin >> word;
        l = word.length();
        if(l > 10){
                    abbr.push_back(word[0]);
            cout << abbr << "\n";
            abbr_num = word.length() - 2;
            abbr.push_back(abbr_num);
            abbr.push_back(word.back());
            result.push_back(abbr);
        }
        else{
            result.push_back(word);
        }
    }
    cout << result << "\n";
}