#include <bits/stdc++.h>
using namespace std;

int func(int k, string a){
    int ans = 0;
    int tmpk = 1;
    for(int i=a.size()-1; i>=0; i--){
        ans += (a[i] - '0') * tmpk;
        tmpk *= k;
    }
    return ans;
}

int main(){
    int k;
    string a, b;
    cin >> k >> a >> b;
    cout << 1ll * func(k, a) * func(k, b) << endl;
    return 0;
}