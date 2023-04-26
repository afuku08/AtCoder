#include <bits/stdc++.h>
using namespace std;

long long dp[200020][2];
const long long MOD = 998244353;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n) , b(n);
    for(long long i=0;i<n;i++) cin >> a[i] >> b[i];

    dp[0][0] = 1;
    dp[0][1] = 1;
    for(long long i=1;i<n;i++){
        if(a[i-1] != b[i]) dp[i][1] += dp[i-1][0];
        if(a[i-1] != a[i]) dp[i][0] += dp[i-1][0];
        if(b[i-1] != a[i]) dp[i][0] += dp[i-1][1];
        if(b[i-1] != b[i]) dp[i][1] += dp[i-1][1];
        dp[i][0] %= MOD;
        dp[i][1] %= MOD;
    }
    cout << (dp[n-1][0] + dp[n-1][1])%MOD << endl;
    return 0;
}