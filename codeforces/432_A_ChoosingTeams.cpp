#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, student, i, members=0, teams=0;
    vector<int> students, allowed_students;
    
    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> student;
        students.push_back(student);
    }
    sort(students.begin(), students.end());

    i = 0;
    while(i < n && students[i] + k <= 5){
        i = i + 1;
    }
    // now i has the last student that can participate
    copy(students.begin(), students.begin() + i, back_inserter(allowed_students));

//    for(int j=0; j < allowed_students.size(); j++){
//        cout << allowed_students[j] << "\t";
//    }
//   cout << "\n";
    
    for(int j = 0; j < i; j++){
//        cout << allowed_students[j] << " ";
        members = members + 1;
        if(members == 3){
            teams = teams + 1;
//            cout << "\n";
//            cout << "teams:" << teams << "\t" << members << "\n";
            members = 0;
        }
    }

//    cout << "\n";
    cout << teams << "\n";
}
