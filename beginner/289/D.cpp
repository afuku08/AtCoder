#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(auto&& x : a) cin >> x;

    long long m;
    cin >> m;
    vector<long long> b(m);
    for(auto&& x : b) cin >> x;

    long long x;
    cin >> x;
    vector<long long> dp(x+1), available(x+1,1);
    for(auto x : b) available[x] = 0;

    dp[0] = 1;
    for(long long i=1;i<=x;i++){
        if(!available[i]) dp[i] = 0;
        else 
            for(auto x : a)
                if(i >= x)
                    dp[i] |= dp[i-x];
                    //dp[i] = dp[i] || dp[i-x];
    }
    cout << (dp[x] ? "Yes" : "No") << endl;
    return 0;
}
