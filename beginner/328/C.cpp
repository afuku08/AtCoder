#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    string s;
    cin >> n >> q >> s;
    for(int i=0;i<q;i++){
        int l, r;
        cin >> l >> r;
        int count = 0;
        if(r-l < 1){
            cout << count << endl;
            continue;
        }
        for(int j=l;j<r;j++){
            if(s[j-1] == s[j]){
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}