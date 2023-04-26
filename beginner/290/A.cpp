#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto& x : a) cin >> x;
    int tensuu = 0;
    for(int i=0;i<m;i++){
        int b;
        cin >> b;
        tensuu += a[b-1];
    }
    cout << tensuu << endl;
    return 0;
}