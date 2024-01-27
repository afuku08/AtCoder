#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag = true;
    for(int i=0;i<s.length()-1;i++){
        if(s[i] == s[i+1] || s[i] == char(s[i+1]-1) || s[i] == char(s[i+1]-2)) continue;
        else flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}