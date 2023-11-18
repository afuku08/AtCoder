#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> s(n);
    for(auto&& a: s) cin >> a;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(s[i] <=x){
            sum += s[i];
        }
    }
    cout << sum << endl;
    return 0;
}