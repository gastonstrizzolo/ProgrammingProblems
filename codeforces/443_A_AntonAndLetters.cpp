#include <bits/stdc++.h>
using namespace std;

int main(){
    char a;
    int i;
    bool flag;
    vector <char> letters;
    cin >> a;
    while(true){
        cin >> a;
        cout << a << "\n";
        if(a == '}'){
            break;
        }
        else if(a == '{' or a == ','){
            continue;
        }
        else{
            i = 0;
            flag = true;
            while(i < letters.size() && flag){
                cout << i << "\t" << a << "\t" << letters[i] << "\t" << (a == letters[i]) << "\n";
                if(a == letters[i]){
                    flag = false;
                }
                i = i + 1;
            }
            if(flag){
                letters.push_back(a);
            }
        }
    }
    cout << letters.size() << "\n";
}    
