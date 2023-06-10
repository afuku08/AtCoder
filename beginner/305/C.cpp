#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    for(int i=0;i<H;i++){
        cin >> s[i];
    }

    pair<int, int> p = {-1, -1};
    bool flag = false;

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(flag) break;
            if(s[i][j] == '#' || (s[i+1][j] == '#' && s[i][j+1] == '#')){
                p.first = i;
                p.second = j;
                flag = true;
            }
        }
    }

    int h = -1, w = -1;

    for(int i=p.first;i<H;i++){
        int MAX = 0;
        for(int j=p.second;j<W;j++){
            if(s[i][j] != '#') break;
            MAX++;
        }
        if(h < MAX) h = MAX;
    }
    
    for(int i=p.second;i<W;i++){
        int MAX = 0;
        for(int j=p.first;j<H;j++){
            if(s[j][i] != '#') break;
            MAX++;
        }
        if(w < MAX) w = MAX;
    }


    for(int i=p.first; i<p.first+w; i++){
        for(int j=p.second; j<p.second+h; j++){
            if(s[i][j] == '.'){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }

    return 0;
}