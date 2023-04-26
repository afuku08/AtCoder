#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<pair<int,int>> visit;
    int x = 0, y = 0;
    visit.insert({x,y});

    for(int i=0;i<n;i++){
        if(s[i] == 'R') x++;
        if(s[i] == 'L') x--;
        if(s[i] == 'U') y++;
        if(s[i] == 'D') y--;
        if(visit.find({x,y}) != visit.end()){
            cout << "Yes" << endl;
            return 0;
        }
        visit.insert({x,y});
    }
    cout << "No" << endl;
    return 0;
}