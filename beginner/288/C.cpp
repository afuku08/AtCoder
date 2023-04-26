#include <bits/stdc++.h>
using namespace std;
//using graph = vector<vector<int>>;

struct UnionFind {
    vector<int> par, siz;

    UnionFind(int n) : par(n, -1) , siz(n, 1) { }
    

    int root(int x) {
        if (par[x] == -1) return x; 
        else return par[x] = root(par[x]);
    }


    bool issame(int x, int y) {
        return root(x) == root(y);
    }


    bool unite(int x, int y) {

        x = root(x);
        y = root(y);

        if (x == y) return false; 

        if (siz[x] < siz[y]) swap(x, y);

        // y を x の子とする
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

    int size(int x) {
        return siz[root(x)];
    }
};

UnionFind uni(200010);


int main(){
    int n, m;
    cin >> n >> m;
    int count = 0;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        bool hasLoop = false;
        if(uni.root(u) == uni.root(v)) {
            hasLoop = true;
        }
        if(hasLoop){
            count++;
        }else{
            uni.unite(u, v);
        }
    }
    cout << count << endl;
    return 0;
}