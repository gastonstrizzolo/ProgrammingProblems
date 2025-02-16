#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, score, total = 0, i = 0;
	cin >> n >> k;

    int array[n-1];

    while(i < n){
        cin >> array[i];
        i++;
    }

    i = 0;

    score = array[k-1];

    while(i < n){
        if(array[i] >= score && array[i] > 0){
            total++;
        }
        i++;
    }

	cout << total << endl;
}