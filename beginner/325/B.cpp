#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int w, x;
        cin >> w >> x;
        v[i].first = x;
        v[i].second = w;
    }
    sort(v.begin(),v.end());

    int maxhuman = 0;
    for(int i=0;i<24;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            int timenow = v[j].first + i;
            if(timenow > 24){
                timenow = timenow - 24;
            }
            if(timenow >= 9 && timenow < 18){
                count += v[j].second;
            }
        }
        maxhuman = max(maxhuman, count);
    }
    cout << maxhuman << endl;
    return 0;
}