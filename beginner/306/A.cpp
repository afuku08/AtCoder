#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}