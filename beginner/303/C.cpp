#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<pair<int,int>> set;
    for(int i = 0;i < m;i++){
        int x, y;
        cin >> x >> y;
        set.insert({x, y});
    }

    int x = 0, y = 0;

    for(int i = 0;i < n;i++){
        h--;
        if(h < 0){
            cout << "No" << endl;
            return 0;
        }
        if(s[i] == 'R'){
            x++;
            if(set.find({x, y}) != set.end()){
                if(h < k){
                    h = k;
                    set.erase({x, y});
                }
            }
        }

        if(s[i] == 'L'){
            x--;
            if(set.find({x, y}) != set.end()){
                if(h < k){
                    h = k;
                    set.erase({x, y});
                }
            }
        }

        if(s[i] == 'U'){
            y++;
            if(set.find({x, y}) != set.end()){
                if(h < k){
                    h = k;
                    set.erase({x, y});
                }
            }
        }

        if(s[i] == 'D'){
            y--;
            if(set.find({x, y}) != set.end()){
                if(h < k){
                    h = k;
                    set.erase({x, y});
                }
            }
        }
    }
    
    if(h >= 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}