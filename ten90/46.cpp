#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n), b(n), c(n);
    for(auto& x : a) cin >> x;
    for(auto& x : b) cin >> x;
    for(auto& x : c) cin >> x;

    for(int i=0;i<n;i++){
        a[i] = a[i] % 46;
        b[i] = b[i] % 46;
        c[i] = c[i] % 46;
    }

    long long ax[46], by[46], cz[46];

    for(int i=0;i<46;i++){
        ax[i] = 0;
        by[i] = 0;
        cz[i] = 0;
    }

    for(int i=0;i<n;i++){
        ax[a[i]]++;
        by[b[i]]++;
        cz[c[i]]++;
    }


    long long ans = 0;
    for(int i=0;i<46;i++){
        for(int j=0;j<46;j++){
            for(int k=0;k<46;k++){
                if((i+j+k) % 46 == 0) ans += ax[i] * by[j] * cz[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}