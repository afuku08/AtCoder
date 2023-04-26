#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    for(auto&& a : c) cin >> a;
    for(auto&& a : r) cin >> a;

    int max = -1;
    int ans = -1;

    /*if(find(c.begin(), c.end(),t ) == c.end()){
        cout << "1" << endl;
        t = c[0];
        max = r[0];
        ans = 0;
    }*/

    bool flag = false;

    for(int i=0;i<n;i++){
        if(c[i] == t) flag = true;
    }

    if(!flag){
        t = c[0];
        max = r[0];
        ans = 0;
    }

    for(int i=0;i<n;i++){
        if(c[i] == t){
            if(r[i] > max){
                max = r[i];
                ans = i;
            }
        }
    }

    cout << ans+1 << endl;
    return 0;
}