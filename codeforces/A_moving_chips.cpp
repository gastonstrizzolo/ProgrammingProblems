#include <bits/stdc++.h>
#include <vector>
using namespace std;

int rightest_1(vector<int> chips){
    int i = chips.size(), result = 0;
    while(i > 0){
        if(chips[i] == 1){
            result = i;
        }
        i = i - 1;
    }
    return result;
}

int leftest_0(vector<int> chips, int first_1){
    int i = first_1, result = chips.size();
    while(i < chips.size()){
        if(chips[i] == 0){
            result = i;
        }
        i = i + 1;
    }
    return result;
}

bool isBlock(vector<int> chips, int first_1){
    bool result = true;
    int howMany = 0, i = first_1;
    while(i < chips.size()){
        if(result && chips[i] == 0){    // todos 1s
            result = false;
        }
        howMany = howMany + (chips[i] == 1);    // un solo 1
        i = i + 1;
        //cout << "result: " << result << "\n" ;
        //cout << "howMany: " << howMany << "\n" ;

    }
    if(howMany == 1){
        return true;
    }
    return result;
}

int main(){
    int n, t, chip, rightest, leftest, operations, first_1=0;
    vector <int> chips;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        chips.clear();
        operations = 0;
        for(int j = 0; j < n; j++){
            cin >> chip;
            //cout << chip;
            chips.push_back(chip);
            if(first_1 == 0 && chip == 1){
                first_1 = j;
            }
        }



        while(! isBlock(chips, first_1)){
            cout << "\n";
            for(int k=0; k <chips.size(); k++) {
                cout << chips.at(k) <<' '; 
            }
            rightest = rightest_1(chips);
            leftest = leftest_0(chips, first_1);
            cout << leftest << " " << rightest << "\n";
            chips[rightest] = 0;
            chips[leftest] = 1;
            first_1 = leftest;
            operations = operations + 1;
        }
        cout << "operations " << operations << "\n";
    }
}