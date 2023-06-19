#include <bits/stdc++.h>
using namespace std;

long long dp[300030][2];

int main(){
    int N;
    cin >> N;
    vector<int> X(N);
    vector<long long> Y(N);
    for(int i=0;i<N;i++){
        cin >> X[i] >> Y[i];
    }

    for(int i=0;i<=N;i++){
        for(int j=0;j<2;j++){
            dp[i][j] = -1;
        }
    }
    
    dp[0][0] = 0;
    dp[0][1] = 0;

    for(int i=0;i<N;i++){
        if(X[i] == 0){
            dp[i+1][0] = max(dp[i][0]+Y[i], dp[i][1]+Y[i]);
        }else{
            dp[i+1][1] = dp[i][0]+Y[i];
        }
        dp[i+1][0] = max(dp[i+1][0], dp[i][0]);
        dp[i+1][1] = max(dp[i+1][1], dp[i][1]);
    }
    cout << max(dp[N][0], dp[N][1]) << endl;
    return 0;
}