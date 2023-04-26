#include <bits/stdc++.h>
using namespace std;

long long rui1[100010] , rui2[100010];

int main(){
    int C, P, L, R;
    int N;
    cin >> N;
    rui1[0] = rui2[0] = 0;
    for(int i=1;i<=N;i++){
        cin >> C >> P;
        if(C == 1){
            rui1[i] = rui1[i-1] + P;
            rui2[i] = rui2[i-1];
        }else{
            rui2[i] = rui2[i-1] + P;
            rui1[i] = rui1[i-1];
        }
    }
    int Q;
    cin >> Q;
    for(int i=0;i<Q;i++){
        cin >> L >> R;
        cout << rui1[R] - rui1[L-1] << " " << rui2[R] - rui2[L-1] << endl;
    } 
    return 0;
}