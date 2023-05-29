#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b){
    if(a > b){
        a = b;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(auto&& a : h) cin >> a;

    vector<long long> dp(n, INF);
    dp[0] = 0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=k;j++){
            if(i+j < n){
                chmin(dp[i+j], dp[i] + abs(h[i] - h[i+j]));
            }
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}