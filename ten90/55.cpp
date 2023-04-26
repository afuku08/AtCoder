#include <bits/stdc++.h>
using namespace std;

long long A[101];

int main(){
    long long n, P, Q;
    cin >> n >> P >> Q;
    int count = 0;
    for(int i=0;i<n;i++) cin >> A[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    for(int m=l+1;m<n;m++){
                        //long long tmp = A[i] * A[j] * A[k] * A[l] * A[m];
                        //if(tmp%p == q) count++;
                        if(1LL * A[i] * A[j] % P * A[k] % P * A[l] % P * A[m] % P == Q) 
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}