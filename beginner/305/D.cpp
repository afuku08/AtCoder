#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    int Q;
    cin >> Q;
    for(int i=0;i<Q;i++){
        long long l, q;
        cin >> l >> q;
        int ans = 0;
        int time = 0;
        int count = 1;
        while(time <= q){
            if(time < l){
                time += A[count];
                count++;
                continue;
            }
            if(time >= l){
                if(count%2 == 0){
                    if(l >= A[count-1]){
                        ans+=A[count] - l;
                        time += A[count];
                        count++;
                    }else if(l < A[count-1]){
                        ans+=A[count] - A[count-1];
                        time += A[count];
                        count++;
                    }
                }else{
                    time += A[count];
                    count++;
                }
            }
            if(count%2 == 0){
                ans += q - A[count-1];
                time += A[count];
            }
        }
        cout << ans << endl;
    }
    return 0;
}