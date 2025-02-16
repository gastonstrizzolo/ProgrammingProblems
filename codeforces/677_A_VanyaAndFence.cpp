#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, ai, result=0;
    cin >> n >> h;
    for(int i=0; i < n; i++){
        cin >> ai;
//        result += pow(2, (ai>h));
        if(ai > h){
            result = result + 2;
        }
        else{
            result = result + 1;
        }
    }
    cout << result << "\n";
}