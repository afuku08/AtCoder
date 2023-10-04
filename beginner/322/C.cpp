#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for(auto&& a : v) cin >> a;
    int count = 0;
    for(int i=1; i<=n; i++){
        //cout << v[count] << endl;
        if(v[count] < i){
            count++;
        }
        //cout << v[count] << endl;
        cout << v[count] - i << endl;
    }
    return 0;
}