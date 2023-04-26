#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int n, m;
    cin >> n >> m;
    Graph G(n);
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int ans = -1;
    for(int i=0;i<n;i++){
        if(i==0){
            ans = 0;
        }else{
            if(G[ans].size() < G[i].size()) ans = i;
        }
    }

    sort(G[ans].begin(), G[ans].end());
    for(auto& a : G[ans]) cout << a << " ";
    cout << endl;
    return 0;
}