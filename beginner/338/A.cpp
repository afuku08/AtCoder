#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag = true;
    if(isupper(s[0])){
        for(int i=1;i<s.length();i++){
            if(isupper(s[i])){
                flag = false;
                break;
            }
        }
    }else{
        flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}