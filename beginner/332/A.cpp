#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> p(n), q(n);
    for(int i=0;i<n;i++){
        cin >> p[i] >> q[i];
    }
    int cost = 0;
    for(int i=0;i<n;i++){
        cost += p[i]*q[i];
    }
    if(cost < s){
        cost += k;
    }
    cout << cost << endl;
    return 0;
}