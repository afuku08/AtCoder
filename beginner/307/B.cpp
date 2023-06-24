#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for(auto&& x : S) cin >> x;
    bool flag = false;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j) continue;
            string tmp = S[i] + S[j];
            bool flag2 = true;
            for(int k=0; k<tmp.length()/2; k++){
                if(tmp[k] != tmp[(tmp.length() - 1 - k)]) flag2 = false;
            }
            if(flag2) flag = true;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}