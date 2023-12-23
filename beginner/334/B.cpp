#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, m, l, r;
    cin >> a >> m >> l >> r;
    long long count = 0;
    if(l == r){
        if((l-a)%m == 0){
            count += 1; 
        }
    }else{
        long long countl = abs(l-a)/m;

        long long countr = abs(r-a)/m;
        l -= a;
        r -= a;
        //cout << countl << " " << countr << endl;
        if((l>=0 && r>=0) || (l<0 && r<0)){
            count = abs(countl - countr);
            if((l-r)%m == 0) count += 1;
        }else{
            count = countl + countr;
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}