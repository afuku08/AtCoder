#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    Graph g(n);
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0;j<n;j++){
            if(s[j] == 'o'){
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }
    bool found = find(g[a].begin(), g[a].end(), b)!= g[a].end();
    if(found) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
    
}