#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, D;
    cin >> N >> D;
    vector<string> S(N);
    for(auto&& a : S) cin >> a;
    int max_day = 0;
    int tmp = 0;
    for(int i=0;i<D;i++){
        bool all = true;
        for(int j=0;j<N;j++){
            if(S[j][i] == 'x'){
                all = false;
                tmp = 0;
            }
        }
        if(all){
            tmp++;
            max_day = max(max_day,tmp);
        }
    }
    cout << max_day << endl;
    return 0;
}