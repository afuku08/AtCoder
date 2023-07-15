#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> D(N);
    for(auto&& a : D) cin >> a;

    int min = 10000000;

    for(int i=0;i<N;i++){
        int sum = Q + D[i];
        if(sum < min) min = sum;
    }

    if(min < P) cout << min << endl;
    else cout << P << endl;
    return 0;
}