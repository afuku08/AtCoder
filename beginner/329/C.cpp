#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    //int count = 0;
    set<string> st;
    int alpha[26];
    for(int i=0;i<26;i++){
        alpha[i] = 0;
    }
    int mojisuu = 1;
    alpha[s[0]-'a'] = mojisuu;
    for(int i=1;i<n;i++){
        if(s[i-1] == s[i]){
            mojisuu++;
            alpha[s[i]-'a'] = max(alpha[s[i]-'a'],mojisuu);
        }else{
            mojisuu = 1;
            alpha[s[i]-'a'] = max(alpha[s[i]-'a'],mojisuu);
        }
    }
    int count = 0;
    for(int i=0;i<26;i++){
        count += alpha[i];
    }
    cout << count << endl;
    return 0;
}