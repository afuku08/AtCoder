#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using graph = vector<vector<int>>;
    graph g(200020);

vector<int> color;
bool func(const graph &G, int v,int cur = 0){
    color[v] = cur;
    for(auto next_v: G[v]){
        if(color[next_v] != -1){
            if(color[next_v] == cur) return false;

            continue;
        }
        if(!func(G,next_v,1-cur)) return false;
    }
    return true;
}

int main(){
    int N, M;
    cin >> N >> M;
    for(int i=0;i<M;++i){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    int counter = 0;
    color.assign(N, -1);

    for(int i=0;i<N-1;i++){
        sort(g[i].begin(),g[i].begin());
        for(int j=i+1;j<N;j++){
            if(color[i] != color[j]){
                if(!binary_search(g[i].begin(),g[i].end(),j)){
                    counter++;
                }
            }
        }
    }
    cout << counter << endl;
    return 0;
}