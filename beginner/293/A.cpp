#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<((int)s.size()/2);i++){
        char c = s[2*i];
        s[2*i] = s[2*i+1];
        s[2*i+1] = c;
    }
    cout << s << endl;
    return 0;
}