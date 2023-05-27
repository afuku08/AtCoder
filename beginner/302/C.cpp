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

void check(vector<string> s){
    for(int i=0;i<(int)s.size();i++){
        cout << s[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(auto&& a : s) cin >> a;
    deque<string> que;
    que.push_back(s[0]);
    s.erase(s.begin()+0);
    check(s);
    int tmp = 1;
    while(tmp < n){
        for(int i=0;i<(int)s.size();i++){
            string str = que.front();
            //cout << str << endl;
            if(diff(str,s[i],m) == 1){
                            cout << i << endl;
                que.push_front(s[i]);
                cout << s[i] << endl;
                s.erase(s.begin()+i);
                //i = 0;
                break;
            }
            check(s);
        }

        for(int i=0;i<(int)s.size();i++){
            string str = que.back();
            if(diff(str,s[i],m) == 1){
                que.push_back(s[i]);
                s.erase(s.begin()+i);
                //i = 0;
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