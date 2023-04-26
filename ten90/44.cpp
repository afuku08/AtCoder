#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for(auto& x : a) cin >> x; 
    long long count = 0;
    for(int i=0;i<q;i++){
        int t, x, y;
        cin >> t >> x >> y;
        if(t == 1){
            swap(a[(x-1+count)%n],a[(y-1+count)%n]);
        }
        if(t == 2){
            count = (count + n -1) % n;
        }
        if(t == 3){
            cout << a[(x-1+count)%n] << endl;
        }
    }
    return 0;
}