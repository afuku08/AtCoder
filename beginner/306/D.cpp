#include <bits/stdc++.h>
using namespace std;

long long dp[300030][2][2];

int main(){
    int N;
    cin >> N;
    vector<int> X(N);
    vector<long long> Y(N);
    for(int i=0;i<N;i++){
        cin >> X[i] >> Y[i];
    }

    //vector<vector<long long>> dp(N+1, vector<long long>(2));

    for(int i=0;i<N;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                dp[i][j][k] = -1;
            }
        }
    }

    dp[0][0][0] = 0;
    dp[0][1][0] = 0;
    dp[0][0][1] = 0;
    dp[0][1][1] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                if(j == 0){
                    if(k == 1 && X[i] == 1) continue;
                    if(X[i]==0){
                        dp[i+1][j][0] = max(dp[i+1][j][0], dp[i][0][k] + Y[i]);
                        dp[i+1][j][0] = max(dp[i+1][j][0], dp[i][1][k] + Y[i]);
                    }else{  
                        dp[i+1][j][1] = max(dp[i+1][j][1], dp[i][0][0] + Y[i]);
                        dp[i+1][j][1] = max(dp[i+1][j][1], dp[i][1][0] + Y[i]);
                    }
                }else{
                    dp[i+1][j][0] = max(dp[i][0][0], dp[i][1][0]);
                    dp[i+1][j][1] = max(dp[i][0][1], dp[i][1][1]);
                }
            }
        }
    }
    long long ans = max(dp[N][0][0], max(dp[N][0][1], max(dp[N][1][0], dp[N][1][1])));
    cout << ans << endl;
    return 0;
}