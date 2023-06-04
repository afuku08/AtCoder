#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    stack<int> sta;
    vector<bool> seen(n);
    seen.assign(n, false);
    sta.push(0);
    seen[0] = true;
    while(!sta.empty()){
        int tmp = sta.top();
        sta.pop();

        for(int i=0;i<n;i++){
            if(seen[i] == true) continue;
            double kyori = sqrt(pow(v[tmp].first-v[i].first,2) + pow(v[tmp].second-v[i].second, 2));
            if(kyori <= d){
                seen[i] = true;
                sta.push(i);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(seen[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}