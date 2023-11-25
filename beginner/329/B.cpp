#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto&& v : a) cin >> v;
    sort(a.begin(), a.end());
    int max_num = a[n-1];
    for(int i=n-1;i>=0;i--){
        if(max_num != a[i]){
            cout << a[i] << endl;
            break;
        }
    }
    return 0;
}