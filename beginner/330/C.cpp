#include <bits/stdc++.h>
using namespace std;

int main(){
    long long d;
    cin >> d;

    long long x_max = sqrt(d);
    long long ans_min = 1<<20;
    for(long long i=0;i<=x_max;i++){
        long long tmp = abs(i * i - d);
        long long y_sqr = sqrt(tmp);

        long long now_min = min(abs(i * i + y_sqr * y_sqr - d), abs(i * i + (y_sqr + 1) * (y_sqr + 1) - d));
        ans_min = min(ans_min, now_min);
    }
    cout << ans_min << endl;
    return 0;
}