#include <bits/stdc++.h>
using namespace std;

long long A[1010], B[1010];

int main(){
    int N;
    long long K;
    cin >> N >> K;
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];
    //long long sumA = 0, sumB = 0;
    long long sa = 0;
    for(int i=0;i<N;i++){
        sa += abs(A[i] - B[i]);
    }
    /*for(int i=0;i<N;i++){
        sumA += A[i];
        sumB += B[i];
    }*/
    bool flag = true;
    if(sa > K) flag = false;
    if(sa % 2 != K % 2) flag = false;
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}