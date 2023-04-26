#include<bits/stdc++.h>
using namespace std;

long long eightToTen(string N){
    long long ans = 0, x = 1ll, M = N.size();
    for(int i = M-1; i>=0;i--){
        ans += 1ll * (N[i] - '0') * x;
        x *= 8ll;
    }
    return ans;
}

string tenToNine(long long N){
    if(N == 0) return "0";
    string ans;
    while(N > 0){
        char c = ((N % 9) + '0');
        ans = c + ans;
        N /= 9ll;
    }
    return ans;
}

int main(){
    string N;
    int K;
    cin >> N >> K;
    for(int i=0;i<K;i++){
        long long tmp = eightToTen(N);
        N = tenToNine(tmp);
        for(int j=0;j<N.size();j++){
            if(N[j] == '8') N[j] = '5';
        }
    }
    cout << N << endl;
    return 0;
}