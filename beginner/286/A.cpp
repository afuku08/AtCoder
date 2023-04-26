#include <bits/stdc++.h>
using  namespace std;

int main(){
    int N, P, Q, R, S;
    int A[110];
    cin >> N >> P >> Q >> R >> S;
    for(int i=1;i<=N;i++) cin >> A[i];
    int B[110];
    for(int i=1;i<=N;i++) B[i] = A[i];
    int j = P , k = R;
    for(int i=0;i<Q-P+1;i++){
        B[j] = A[k];
        B[k] = A[j];
        j++;
        k++;
    }
    for(int i=1;i<=N;i++){
        cout << B[i];
        cout << " ";
    }
    cout << endl;
    return 0;
}