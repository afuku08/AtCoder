#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto& x: v) cin >> x;
    set<int> set;
    for(int i=1;i<=n;i++){
        if(set.find(i) == set.end()){
            set.insert(v[i-1]);
        }
    }

    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(set.find(i) == set.end()){
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}