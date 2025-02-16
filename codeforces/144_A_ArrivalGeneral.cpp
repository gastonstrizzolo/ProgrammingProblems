#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ai, tmp, result, index_min, index_max, minimum=101, maximum=-1, j=0, k=0, seconds=0;
    cin >> n;
    int soldiers[n];
    for(int i=0; i < n; i++){
        cin >> ai;
        soldiers[i] = ai;
        if(ai <= minimum){
            minimum = ai;
            index_min = i;
        }
        if(ai >= maximum){
            maximum = ai;
            index_max = i;
        }
    }

    while(index_max > 0 && index_min < n - 1){
        cout << "index max:" << index_max << "\n";
        cout << "index min:" << index_min << "\n";
        if(index_min == index_max - 1){
            tmp = soldiers[index_max];
            soldiers[index_max] = soldiers[index_min];
            soldiers[index_min] = tmp;
            index_max = index_max - 1;
            index_min = index_min + 1;
            seconds = seconds + 1;
        }
        else{
            if (soldiers[index_max-1] < soldiers[index_max]){
                tmp = soldiers[index_max];
                soldiers[index_max] = soldiers[index_max - 1];
                soldiers[index_max - 1] = tmp;
                index_max = index_max - 1;
                seconds = seconds + 1;
            }
            if (soldiers[index_min+1] > soldiers[index_min]){
                tmp = soldiers[index_min];
                soldiers[index_min] = soldiers[index_min + 1];
                soldiers[index_min + 1] = tmp;
                index_min = index_min + 1;
                seconds = seconds + 1;
            }
        }
        for(int i=0; i < n; i++){
            cout << soldiers[i] << "\t";
        }
        cout << "\n";
        cout << "index max:" << index_max << "\n";
        cout << "index min:" << index_min << "\n";
        cout << "seconds:" << seconds << "\n";

    }
//    cout << "seconds:" << seconds << "\n";
}
