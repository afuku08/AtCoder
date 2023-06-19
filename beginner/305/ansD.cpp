#include <bits/stdc++.h>
using namespace std;

/*long long func(long long r, vector<long long> fa, vector<long long> a) {
    auto x = upper_bound(a.begin(), a.end(), r) - a.begin();
    return fa[x-1] + (fa[x] - fa[x-1]) / (a[x]  - a[x-1]) * (r - a[x-1]);
}*/

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(auto&& x : A) cin >> x;
    vector<long long> fa(N);
    fa[0] = 0;
    for(int i=1; i<N; i++){
        if(i%2 == 0){
            fa[i] = A[i] - A[i-1] + fa[i-1];
        }else{
            fa[i] = fa[i-1];
        }
    }

    int Q;
    cin >> Q;

    auto f{[&A, &fa](auto y) -> unsigned {
        auto x = upper_bound(A.begin(), A.end(), y) - A.begin();
        //cout << x << endl;
        return fa[x-1] + (fa[x] - fa[x-1]) / (A[x]  - A[x-1]) * (y - A[x-1]);
    }};

    for(int i=0;i<Q;i++){
        long long l, r;
        cin >> l >> r;
        cout << f(r) - f(l) << endl;
    }
    return 0;
}