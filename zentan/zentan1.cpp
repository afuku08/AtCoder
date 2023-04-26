#include<iostream>
using namespace std;

int N,K,A[10000];
int cnt = 0;

int main(){
    cin >> N >> K;
    for(int i=1;i<=N;i++) A[i] = i;
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            for(int k=j+1;k<=N;k++){
                if(A[i] + A[j] + A[k] == K) cnt+=1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}