#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    vector<long long> app;
    for(int i=0;i<Q;i++){
        int q;
        long long x;
        cin >> q >> x;
        if(q == 1){
            app.push_back(x);
        }else{
            cout << app[app.size()-x] << endl;
        }
    }
    return 0;
}