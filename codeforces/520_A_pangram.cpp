#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, int_letter;
    string result = "YES";
    char letter;
    int alphabet[26];
    memset(&alphabet, 0, sizeof(alphabet));
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> letter;
        if(letter <= 'Z'){
            int_letter = int(letter) - 65;
        }
        else{
            int_letter = int(letter) - 97;
        }

        cout << letter << "\t" << int_letter << "\n";
        if(alphabet[int_letter] == 0){
            alphabet[int_letter] = 1;
        }
    }
    for(int i=0; i < 26; i++){
        cout << i << "\t" << alphabet[i] << "\n";
        if(alphabet[i] == 0){
            result = "NO";
            break;
        }
    }
    cout << result << "\n";
}