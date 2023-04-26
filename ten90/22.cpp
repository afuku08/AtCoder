#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x,long long y){
    if(y == 0) return x;
    return gcd(y,x%y);
}

int main(){
    long long A, B, C;
    cin >> A >> B >> C;
    long long r = gcd(A,gcd(B,C));
    long long count = (A/r - 1LL) + (B/r - 1LL) + (C/r - 1LL);
    cout << count << endl;
    return 0;
}