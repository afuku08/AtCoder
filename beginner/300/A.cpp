#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> c(n);
    for(auto&& a : c) cin >> a;
    int sum = a + b;
    for(int i=0;i<n;i++){
        if(sum == c[i]){
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}