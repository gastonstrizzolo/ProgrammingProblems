#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;


int main(){
    string s1, s2, answer = "0";
    char c;
    int i = 0;
    do {
        c = getchar();
        s1.push_back(c);
    } while (c != '\n');
    
    do {
        c = getchar();
        s2.push_back(c);
    } while (c != '\n');

    while(i < (s1.length() - 1) && answer == "0"){
        if(!isupper(s1[i]) && isupper(s2[i])){
            if(s1[i] < s2[i] + 32){
                answer = "-1";
            }
            else if(s1[i] > s2[i] + 32){
                answer = "1";
            }
        }
        else if(isupper(s1[i]) && !isupper(s2[i])){
            if(s1[i] + 32 < s2[i]){
                answer = "-1";
            }
            else if(s1[i] + 32 > s2[i] ){
                answer = "1";
            }
        }
        else{
            if(s1[i] < s2[i]){
                answer = "-1";
            }
            else if(s1[i] > s2[i] ){
                answer = "1";
            }    
        }
        i++;
    }
    cout << answer << "\n";
}