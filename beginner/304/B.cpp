#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s.size() < 4) cout << s << endl;
    if(s.size() >= 4 && s.size() < 5){
        s[3] = '0';
        cout << s << endl;
    }
    if(s.size() >= 5 && s.size() < 6){
        s[4] = '0';
        s[3] = '0';
        cout << s << endl;
    }
    if(s.size() >= 6 && s.size() < 7){
        s[5] = '0';
        s[4] = '0';
        s[3] = '0';
        cout << s << endl;
    }
    if(s.size() >= 7 && s.size() < 8){
        s[6] = '0';
        s[5] = '0';
        s[4] = '0';
        s[3] = '0';
        cout << s << endl;
    }
    if(s.size() >= 8 && s.size() < 9){
        s[7] = '0';
        s[6] = '0';
        s[5] = '0';
        s[4] = '0';
        s[3] = '0';
        cout << s << endl;
    }
    if(s.size() >= 9 && s.size() < 10){
        s[8] = '0';
        s[7] = '0';
        s[6] = '0';
        s[5] = '0';
        s[4] = '0';
        s[3] = '0';
        cout << s << endl;
    }
    return 0;
}