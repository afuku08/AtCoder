#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int l = -1;
    bool flag = false;
    int maxl = 0;
    int tmpl = 0;

    for(int i=0;i<n;i++){
        if(s[i] == '-'){
            flag = true;
            maxl = max(maxl, tmpl);
            tmpl = 0;
        }
        if(s[i] == 'o'){
            ++tmpl;
        }
        maxl = max(maxl, tmpl);
    }
    if(flag) l = maxl;
    if(l != 0) cout << l << endl;
    else cout <<"-1" << endl;
    return 0;
}