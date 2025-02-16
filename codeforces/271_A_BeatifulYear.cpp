#include <bits/stdc++.h>
using namespace std;

bool distinct(int year){
    char seen[10] = {0};

    while (year) {
        int digit = year % 10;
        year /= 10;
        if (seen[digit]++)
            return false; /* not unique */
     }
     return true; /* unique */
}

int main(){
    int year, solution, digit;
    vector<int> digits;
    cin >> year;
    solution = year + 1;
    while(!distinct(solution)){
        solution = solution + 1;
    }
    cout << solution << "\n";
}