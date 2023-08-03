#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
vector<int> num;
void dfs(const Graph &G, int v, int first){
    seen[v] = true;
    num.push_back(v);

    for(auto next_v : G[v]){
        if (seen[next_v]){
            if(next_v == first){
                cout << num.size() << endl;
                for(int i=0;i<num.size();i++){
                    cout << num[i]+1 << " ";
                }
                cout << endl;
                exit(0);
            }else{
                continue;
            }           
        }
        dfs(G, next_v, first);
    }
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(auto&& x : A) cin >> x;
    Graph G(N);
    for(int i=0;i<N;i++){
        G[i].push_back(A[i]-1);
    }
    for(int i=0;i<N;i++){
        seen.assign(N, false);
        num.clear();
        dfs(G, i, i);
    }
    return 0;
}