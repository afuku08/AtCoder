#include <bits/stdc++.h>
using namespace std;

long long A[100010],C[100010];

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++) cin >> A[i];
    int Q;
    cin >> Q;
    int n=0;
    for(int i=0;i<Q;i++){
        int les;
        cin >> les;
        if(les == 1){
            int k;
            long long x;
            cin >> k >> x;
            A[k-1] = x;
        }else{
            int k;
            cin >> k;
            C[n] = A[k-1];
            n++;
        }
    }
    for(int i=0;i<n;i++) cout << C[i] << endl;
    return 0;
}