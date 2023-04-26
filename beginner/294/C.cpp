#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto& o: a) cin >> o;
    for(auto& o: b) cin >> o;
    vector<int> ansa, ansb;
    int acount = 0, bcount = 0;
    for(int i=1;i<=n+m;i++){
        if(acount >= n){
            ansb.push_back(i);
            continue;
        } 
        if(bcount >= m){
            ansa.push_back(i);
            continue;
        } 
        if(a[acount] < b[bcount]){
            ansa.push_back(i);
            acount++;
        }else{
            ansb.push_back(i);
            bcount++;
        }
    }
    for(auto x: ansa) cout << x << " ";
    cout << endl;
    for(auto x: ansb) cout << x << " ";
    cout << endl;
    return 0;
}