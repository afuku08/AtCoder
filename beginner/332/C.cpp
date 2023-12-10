#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int eve = 0;
    int eve_at = 0;
    int max_eve = 0;
    int max_eve_at = 0;
    for(int i=0;i<n;i++){
        if(s[i] != '0'){
            eve += 1;
        }
        if(s[i] == '2'){
            eve_at += 1;
        }
        if(s[i] == '0'){
            max_eve = max(max_eve, eve);
            max_eve_at = max(max_eve_at, eve_at);
            eve = 0;
            eve_at = 0;
        }
    }
    max_eve = max(max_eve, eve);
    max_eve_at = max(max_eve_at, eve_at);
    int need = 0;
    if(max_eve - max_eve_at <= m){
        need = max_eve_at;
    }else{
        need = max_eve - m;
    }
    cout << need << endl;
    return 0;
}