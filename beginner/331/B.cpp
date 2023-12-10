#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    int max_s = n/6 + 1;
    int max_m = n/8 + 1;
    int max_l = n/12 + 1;
    long long min_mon = 1 << 24;
    for(int i=0;i<=max_s;i++){
        for(int j=0;j<=max_m;j++){
            for(int k=0;k<=max_l;k++){
                if(i*6+j*8+k*12 >= n){
                    long long now_mon = s*i + j*m + k*l;
                    min_mon = min(min_mon,now_mon);
                }
            }
        }
    }
    cout << min_mon << endl;
    return 0;
}