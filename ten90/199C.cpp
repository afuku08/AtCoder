#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q;
    cin >> q;
    int count = 0;
    for(int i=0;i<q;i++){
        int t,a,b;
        cin >> t >> a >> b;
        if(t == 1){
            if(count%2 == 0){
                swap(s[a-1] ,s[b-1]);
            }else{
                if(n >= a){
                    if(n >= b) swap(s[a+n-1],s[b+n-1]);
                    else swap(s[a+n-1],s[b-n-1]);
                }else{
                    if(n >= b) swap(s[a-n-1], s[b+n-1]);
                    else swap(s[a-n-1], s[b-n-1]);
                }
            }
        }
        if(t == 2){
            count++;
        }
    }
    if(count % 2 == 0) cout << s << endl;
    else{
        string tmp1;
        for(int i=n;i<2*n;i++) tmp1.push_back(s[i]);
        for(int i=0;i<n;i++) tmp1.push_back(s[i]);
        cout << tmp1 << endl;
    }
    return 0;
}