#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    unsigned int n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        int array[n];
        array[0] = 1;
        array[1] = 2;
        array[2] = 3;
        for(int j = 2; j < n; j++){
            array[j] = array[j-1] + 1;
            while(3 * array[j] % (array[j-2] + array[j-1]) == 0){
                array[j-2] = array[j-2] + 1;
                if(array[j-2] >= array[j-1]){
                    array[j-1] = array[j-1] + 1;
                }
                if(array[j-1] >= array[j]){
                    array[j] = array[j] + 1;
                }
            }
        for(int K = 0; K < n; K++){
            cout << array[K] << "\t";
            }

        }
    
    cout << "\n";
    }

}