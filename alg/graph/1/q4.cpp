#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    Graph g(n);
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    set<int> s;

    for(auto& tmp : g[x]){
        for(auto b : g[tmp]){
            bool flag = false;
            if(find(g[x].begin(), g[x].end(),b) != g[x].end() || x == b) flag = true;
            if(flag == false) s.insert(b);
        }
    }
    cout << s.size() << endl;
    return 0;
}