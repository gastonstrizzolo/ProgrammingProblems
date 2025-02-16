#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2, str3;
    bool not_found, isPermu=true;
    cin >> str1 >> str2 >> str3;
    int i, j, k, len1= str1.length(), len2=str2.length(), len3=str3.length(), index_1=0, index_2=0;
    int isPermu1[len1], isPermu2[len2];
    memset(isPermu1, 0, sizeof(isPermu1));
    memset(isPermu2, 0, sizeof(isPermu2));

    if(len1 + len2 != len3){
        cout << "NO" << "\n";
        return 0;
    }
    else{
        i = 0;
        while(i < len3){
            not_found = true;
            while(not_found  && index_1 < len1){
                cout << i << "\t" << str3[i] << "\t" << str1[index_1] << "\n";
                if(str3[i] == str1[index_1]){
                    isPermu1[index_1] = 1;
                    not_found = false;
                    index_1 = index_1 + 1;
                }
            }
            not_found = true;
            while(not_found && index_2 < len2){
                cout << i << "\t" << str3[i] << "\t" << str2[index_2] << "\n";
                if(str3[i] == str2[index_2]){
                    isPermu2[index_2] = 1;
                    not_found = false;
                    index_2 = index_2 + 1;
                }     
            }
            i = i + 1;
        }
    }
    i = 0;
    cout << "\n" << "\n";
    while(isPermu && i < len1){
        cout << i << "\t" << isPermu1[i] << "\n";
        if(isPermu1[i] == 0){
            isPermu = false;
        }
        i = i + 1;
    }
    i = 0;
    while(isPermu && i < len2){
        cout << i << "\t" << isPermu2[i] << "\n";
        if(isPermu2[i] == 0){
            isPermu = false;
        }
        i = i + 1;
    }
    if(isPermu){
        cout << "YES" << "\n";
    } else{
        cout << "NO" << "\n";
    }
}