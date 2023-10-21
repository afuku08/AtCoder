#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 29;

template<class T> void chmin(T& a, T b) {
    if (a > b){
        a = b;
    }
}

int main(){
    int n;
    cin >> n;
    string td;
    cin >> td;
    vector<string> s(n);
    for(auto&& a : s) cin >> a;
    vector<int> ans;

    for(int ik=0; ik<n; ik++){
        vector<vector<int>> dp(td.size() + 1 , vector<int>(s[ik].size()+1, INF));
        dp[0][0] = 0;
        for(int i=0; i<=td.size(); i++){
            for(int j=0; j<=s[ik].size(); j++){
                if(i > 0 && j > 0){
                    if(td[i-1] == s[ik][j-1]){
                        chmin(dp[i][j], dp[i-1][j-1]);
                    }else{
                        chmin(dp[i][j], dp[i-1][j-1] + 1);
                    }
                }
                if(i>0) chmin(dp[i][j], dp[i-1][j]+1);

                if(j>0) chmin(dp[i][j], dp[i][j-1]+1);
            }
        }
        if(dp[td.size()][s[ik].size()] <= 1){
            ans.push_back(ik);
        }
    }
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i]+1 << " ";
    }
    return 0;
}