#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto&& v : a) cin >> v;
    long long min_num = 10000000000000000;
    long long tmp = 0;

    for(int i=0;i<n;i++){
        tmp = tmp + a[i];
        min_num = min(min_num, tmp);
    }

    if(min_num > 0) min_num = 0;
    long long ans = abs(min_num);

    for(int i=0;i<n;i++){
        ans += a[i];
    }
    
    cout << ans << endl;
    return 0;
}