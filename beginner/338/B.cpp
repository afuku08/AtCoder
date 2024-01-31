#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int al[26];
    for(int i=0;i<26;i++) al[i]=0;

    for(int i=0;i<s.length();i++){
        al[s[i]-'a']++;
    }
    int big = -1;
    int num = -1;
    for(int i=0;i<26;i++){
        if(al[i] > num){
            big = i;
            num = al[i];
        }
    }
    cout << (char)(big + 'a') << endl;
    return 0;
}