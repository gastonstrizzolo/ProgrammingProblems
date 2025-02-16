#include <bits/stdc++.h>
using namespace std;
#include <math.h>

int main(){
    int t, a, b, l, x, y, k, j, h, answers, prod;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a;
        cin >> b;
        cin >> l;
        answers = 0;
        k = 1;
        x = 1;
        y = 1;
        if(l % a != 0 and l % b != 0){
            answers = 1;
        }
        else{
            for(int x = 1; x < l; x++){
                for(int y = 1; y < l; y++){
                    for(int k = 1; k < l; k++){
                        prod = k * pow(a, x) * pow(b, y);
                        cout << "prod: " << prod << "\n";
                        if(prod == l){
                            answers += 1;
                            break;
                        }
                    }
                }
            }
        }
        cout << "answers: " << answers << "\n";
    }
}