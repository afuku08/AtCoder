#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(64);
    for(auto&& a : v) cin >> a;
    unsigned long long b = 1;
    unsigned long long ans = 0;
    for(int i=0; i<64; i++){
        ans += (1LL * v[i] * b);
        b = b * 2;
    }
    cout << ans << endl;
    return 0;
}