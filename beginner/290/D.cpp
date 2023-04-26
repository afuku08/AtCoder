#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long n, d, k;
        cin >> n >> d >> k;
        vector<bool> v(n, false);
        v[0] = true;
        long long last = 0;
        long long count = 1;
        if(count == k){
            cout << "0" << endl;
        }
        for(int j=0;j<n-1;j++){
            long long x = (last + d) % n;
            while(v[x]){
                x = (x + 1) % n;
            }
            v[x] = true;
            count++;
            if(count == k){
                cout << x << endl;
            }
            last = x;
        }
    }
    return 0;
}