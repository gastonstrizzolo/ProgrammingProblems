#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, total = 0;
	cin >> n;
    std::string current;

    for(int i=0; i < n; i++){
        cin >> current;
        if(current.compare("X++") == 0 || current.compare("++X") == 0 ){
            total++;
        }
        else {
            total--;
        }
    }
    cout << total << endl;
}