#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    for(auto&& v : q) cin >> v;
    for(auto&& v : a) cin >> v;
    for(auto&& v : b) cin >> v;

    int max_a = 10000000, max_b = 10000000;
    for(int i=0;i<n;i++){
        if(a[i] != 0){
            max_a = min(max_a, q[i]/a[i]);
        }
        if(b[i] != 0){
            max_b = min(max_b, q[i]/b[i]);
        }
        
    }

    //cout << max_a << " " << max_b << endl;

    int num = 0;
    for(int i=0;i<=max_a;i++){
        int num_b = 1000000;
        for(int k=0;k<n;k++){
            if(b[k] == 0) continue;
            num_b = min(num_b, (q[k]-a[k]*i)/b[k]);
        }
        num = max(num, num_b+i);
    
    }
    cout << num << endl;
    return 0;
}