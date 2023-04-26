#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> s(m);
    for(int i=0;i<m;i++){
        int c;
        cin >> c;
        s[i].resize(c);
        for(auto& x : s[i]) cin >> x;
    }
    int count = 0;
    for(int bit=0;bit<(1 << m);bit++){
        set<int> se;
        for(int i=0;i<m;i++){
            if(bit & (1 << i)){
                for(auto& x : s[i]) se.insert(x);
            }
        }
        count += (int)se.size() == n;
    }
    cout << count << endl;
    return 0;
}