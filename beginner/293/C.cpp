#include <bits/stdc++.h>
using namespace std;

long long a[12][12];

int main(){
    int h, w;
    cin >> h >> w;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin >> a[i][j];
        }
    }

    int p[20], l=h+w-2, ans = 0;
    for(int i=1;i<=l;i++){
        if(i > w-1) p[i] = 1;
        else p[i] = 0;
    }

    do{
        int x=1, y=1;
        set<int> s;
        s.insert(a[1][1]);
        for(int i=1;i<=l;i++){
            if(p[i]) y++;
            else x++;
            s.insert(a[x][y]);
        }
        if(s.size() == l+1) ans++;
    }while(next_permutation(p+1,p+l+1));
    
    cout << ans << endl;
    return 0;
}