#include <bits/stdc++.h>

using namespace std;

int diff(string s1, string s2, int m){
    int nodiff = 0;
    for(int i=0;i<m;i++){
        if(s1[i] != s2[i]){
            nodiff += 1;
        }
    }
    return nodiff;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(auto&& a : s) cin >> a;
    sort(s.begin(), s.end());
    do{
        bool ok = true;
        for(int i=0;i<n-1;i++){
            if(diff(s[i], s[i+1], m) != 1){
                ok = false;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        } 
    }while(next_permutation(s.begin(), s.end()));
    cout << "No" << endl;
    return 0;
}