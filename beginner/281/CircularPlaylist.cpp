#include <iostream>
using namespace std;

int main(){
    int N, T;
    int A[100010];
    cin >> N >> T;
    for(int i=0;i<N;i++) cin >> A[i];
    int sum = 0;
    for(int i=0;i<N;i++) sum += A[i];
    int res = T;
    while(true){
        if(res > sum) res = res - sum;
        else break;
    }
    int i = 0;
    for(i=0;i<N;i++){
        if(A[i] < res) res -= A[i];
        else{
            break;
        }
    }
    cout << i+1 << " " << res << endl;
    return 0;
}