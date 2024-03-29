#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b){
    if(a > b){
        a = b;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(auto&& a : h) cin >> a;
    
    vector<long long> dp(n, INF);
    dp[0] = 0;

    for(int i=1;i<n;i++){
        chmin(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        if(i > 1) chmin(dp[i], dp[i-2] + abs(h[i] - h[i - 2]));
    }
    cout << dp[n - 1] << endl;
    return 0;
}