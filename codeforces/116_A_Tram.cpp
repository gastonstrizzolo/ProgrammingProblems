#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ai, bi, people, capacity=0, result=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ai >> bi;
        people = capacity - ai + bi;
        result = max(people , max(capacity, result));
        capacity = people;   
    }
    cout << result << "\n";
}