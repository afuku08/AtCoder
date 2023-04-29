#include<bits/stdc++.h>
using namespace std;

int min(int a, int b){
    if(a<b) return a;
    else return b;
}

int main(){
    int h, w;
    cin >> h >> w;
    int N = min(h,w);
    vector<vector<char>> c(h, vector<char>(w));
    vector<int> s(N);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> c[i][j];
        }
    }

    for(int i=0;i<N;i++) s[i] = 0;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int ans = 0;
            if(c[i][j] == '#'){
                if(i==0 || i==h-1 || j==0 || j==w-1) continue;
                if(c[i-1][j-1] == '#' && c[i-1][j+1] == '#' && c[i+1][j-1] == '#' && c[i+1][j+1]){
                    int ti=i, tj=j;
                    while(c[ti][tj] == '#'){
                        ans++;
                        if(ti-1>=0 && tj-1>=0 && tj+1<w && ti+1<h){
                            break;
                        }
                        ti--;
                        tj--;
                    }
                    s[ans-1]++;
                }
            }
        }
    }

    for(int i=0;i<N;i++) cout << s[i] << " ";
    cout << endl;

    return 0;
}