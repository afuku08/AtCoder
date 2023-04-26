#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long e = 1;
    for(int i=1;i<=b;i++) e *= c;
    if(a < e) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}