#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int sl = abs(s[0] - s[1]);
    int tl = abs(t[0] - t[1]);
    int l1, l2;
    if(sl == 1 || sl == 4){
        l1 = 1;
    }else{
        l1 = 2;
    }
    if(tl == 1 || tl == 4){
        l2 = 1;
    }else{
        l2 = 2;
    }
    if(l1 == l2){cout << "Yes" << endl;}
    else{cout << "No" << endl;}
    return 0;
}