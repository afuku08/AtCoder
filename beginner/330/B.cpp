#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, l, r;
    cin >> n >> l >> r;
    vector<long long> a(n);
    for(auto&& v : a) cin >> v;

    for(int i=0;i<n;i++){
        int ans = -1;
        if(a[i] <= l){
            ans = l;
        }else if(a[i] >= r){
            ans = r;
        }else{
            ans = a[i];
        }
        cout << ans << " ";
    }
    return 0;
}