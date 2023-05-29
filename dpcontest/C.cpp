#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b){
    if(a < b){
        a = b;
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> abc(n, vector<int>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> abc[i][j];
        }
    }

    vector<vector<long long>> dp(n+1, vector<long long>(3,0));
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(j == k) continue;
                chmax(dp[i][k], dp[i-1][j] + abc[i-1][k]);
            }
        }
    }
    long long max = -1;
    for(int i=0;i<3;i++){
        if(max < dp[n][i]) max = dp[n][i];
    }
    cout << max << endl;
}