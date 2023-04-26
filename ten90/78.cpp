#include<bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int N, M;
    cin >> N >> M;
    Graph g(N);
    for(int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;  u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ans = 0;
    for(int i=0;i<N;i++){
        int tmp = 0;
        for(auto x: g[i]){
            if(i > x) tmp++;
        }
        if(tmp == 1) ans ++;
    }
    cout << ans << endl;
    return 0;
}