#include <bits/stdc++.h>
using namespace std;

long long A, B;
long long tmp = pow(10, 18);

long long gcd(long long a, long long b){
    if(a%b == 0) return b;
    else return gcd(b, a%b);
}

int main(){
    cin >> A >> B;
    long long ans = B / gcd(A, B);
    if(ans > tmp / A) cout << "Large" << endl;
    else cout << ans * A << endl;
    return 0;
}