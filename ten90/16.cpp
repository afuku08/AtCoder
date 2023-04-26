#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

const int INF = 20000000;
long long n, a, b, c;

int main(){
    cin >> n >> a >> b >> c;
    long long ans = INF;
    for(int i=0;i<=9999;i++){
        for(int j=0;j<=9999-i;j++){
            long long k = n - 1ll*a*i - 1ll*b*j;
            long long r = 1ll*i + 1ll*j + k/c;
            if(k%c != 0ll || k < 0 || r > 9999ll) continue;
            ans = min(ans, r);
        }
    }
    cout << ans << endl;
    return 0;
}