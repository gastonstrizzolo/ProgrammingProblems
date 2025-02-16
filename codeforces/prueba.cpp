#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isBlock(vector<int> chips, int first_1){
    bool result = true;
    int howMany = 0, i = first_1;
    while(i < chips.size()){
        if(result && chips[i] == 0){    // todos 1s
            result = false;
        }
        howMany = howMany + (chips[i] == 1);    // un solo 1
        i = i + 1;
        cout << "result: " << result << "\n" ;
        cout << "howMany: " << howMany << "\n" ;

    }
    if(howMany == 1){
        return true;
    }
    return result;
}


int main(){
    int n, t, chip, rightest, leftest, operations = 0, first_1=0;
    vector <int> chips;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        chips.clear();
        for(int j = 0; j < n; j++){
            cin >> chip;
            chips.push_back(chip);
            if(first_1 == 0 && chip == 1){
                first_1 = j;
            }
        }

        cout << isBlock(chips, first_1) << "\n";
        }
    }
