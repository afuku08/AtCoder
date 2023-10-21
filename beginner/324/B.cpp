#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    bool flag = false;

    for(long long i=0;pow(2,i)<=n;i++){
        for(long long j=0;pow(3,j)<=n;j++){
            long long kai = pow(2,i) * pow(3,j);
            if(kai == n){
                flag = true;
            }
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}