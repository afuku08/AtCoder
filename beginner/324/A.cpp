#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(auto&& v : a) cin >> v;
    bool flag = true;
    for(int i=0; i<N; i++){
        if(a[i] != a[0]){
            flag = false;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}