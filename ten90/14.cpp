#include <bits/stdc++.h>
using namespace std;

vector<long long> a, b;

int main(){
    int n;
    long long ans = 0;
    cin >> n;
    a.resize(n);
    b.resize(n);
    for(auto& x: a) cin >> x;
    for(auto& x: b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0;i<n;i++){
        ans += abs(a[i] - b[i]);
    }
    cout << ans << endl;
    return 0;
}