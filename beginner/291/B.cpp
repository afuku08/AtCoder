#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n*5);
    for(auto& x : v) cin >> x;
    sort(v.begin(), v.end());
    long double sum = 0;
    for(int i=n;i<5*n-n;i++){
        sum += v[i];
    }
    long double ave = sum / (3.0*n);
    cout << setprecision(15) << ave << endl;
    return 0;
    }