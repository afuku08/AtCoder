#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int index = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '.'){
            index = i;
        }
    }
    string ans = "";
    for(int i=index+1;i<s.size();i++){
        ans += s[i];
    }
    cout << ans << endl;
    return 0;
}