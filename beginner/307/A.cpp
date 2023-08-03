#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(7*N);
    for(auto&& x : A) cin >> x;
    vector<long long> ans(N);
    for(int i=0; i<7*N; i++){
        ans[i/7] += A[i];
    }
    
    for(int i=0;i<N;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}