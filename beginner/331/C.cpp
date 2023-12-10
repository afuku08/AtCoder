#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto&& v : a) cin >> v;
    vector<int> num(1000000);
    for(int i=0;i<1000000;i++){
        num[i] = 0;
    }
    for(int i=0;i<n;i++){
        num[a[i]-1] += 1;
    }
}