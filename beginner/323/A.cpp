#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag = true;
    for(int i=0;i<s.length();i++){
        if(i%2 != 0){
            if(s[i] != '0'){
                flag = false;
            }
        }
    }
    if(flag){cout << "Yes" << endl;}
    else{cout << "No" << endl;}
    return 0;
}