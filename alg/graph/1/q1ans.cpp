#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0;j<n;j++){
            v[i][j] = s[j];
        }
    }
    if(v[a][b] == 'o') cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}