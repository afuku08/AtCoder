#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> m >> n;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    set<pair<int, int>> s;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m-1; j++){
            int k, l;
            if(v[i][j] > v[i][j+1]){
                k = v[i][j+1];
                l = v[i][j];
            }else{
                k = v[i][j];
                l = v[i][j+1];
            }
            s.insert({k, l});
        }
    }
    int tmp = m * (m - 1);
    cout << tmp/2 - s.size() << endl;
    return 0;
}