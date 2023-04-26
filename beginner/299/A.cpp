#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    bool ans = false;
    for(int i=0;i<n;i++){
        
        if(s[i] == '|'){
            if(flag == false) flag = true;
            else flag = false;
        }
        if(s[i] == '*' && flag == true) ans = true;
    }
    if(ans) cout << "in" << endl;
    else cout << "out" << endl;
    return 0;
}