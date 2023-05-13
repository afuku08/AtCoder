#include<iostream>
#include<vector>
#include<stack>
using namespace std;
using Graph = vector<vector<int>>;

bool searchCycle(const Graph &G, int s){
    int N = (int )G.size();

    vector<bool> seen(N, false);
    stack<int> todo;

    seen[s] = true;
    todo.push(s);

    int before = s;

    while(!todo.empty()) {
        int v = todo.top();
        todo.pop();

        for(int x : G[v]){
            if(seen[x]){
                if(before == x){continue;}
                else{ return true; }
            }

            seen[x] = true;
            todo.push(x);
        }
        before = v;
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;
    Graph g(n);
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cout << searchCycle(g, 0) << endl;
    return 0;
}