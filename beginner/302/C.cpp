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
    deque<string> que;
    que.push_back(s[0]);
    s.erase(s.begin()+0);
    int tmp = 1;
    while(tmp < n){
        string str;
        for(int i=0;i<(int)s.size();i++){
            str = que.front();
            if(diff(str,s[i],m) == 1){
                que.push_front(s[i]);
                s.erase(s.begin()+i);
                break;
            }
        }

        for(int i=0;i<(int)s.size();i++){
            str = que.back();
            if(diff(str,s[i],m) == 1){
                que.push_back(s[i]);
                s.erase(s.begin()+i);
                break;
            }
        }
        if(s.empty()) break;
        tmp++;
    }
    if((int)que.size() == n) cout << "Yes" <<endl;
    else cout << "No" << endl;
    return 0;
}