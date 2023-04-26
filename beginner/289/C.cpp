#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(m, vector<int>(n,0));
    
    for(int i=0;i<m;i++){
        int c;
        cin >> c;
        for(int j=0;j<c;j++){
            cin >> v[i][j];
        }
    }
    for(int bit = 0; bit < (1 << m); ++bit){
        vector<bool> flag(n+1, false);
        for(int i=0;i<m;i++){
            if(bit & (1 << i)){
                for(int j=0;j<n;++j){
                    flag[v[i][j]] == true;
                    if(v[i][j] == 0) break;
                }
        }
        }
        bool f = true;
            for(int i=1; i<=n; ++i){
                if(flag[i] == false){
                    f = false;
                    break;
                } 
            }
        if(f) count++;
    }
    cout << count << endl;
    return 0;
}