#include <bits/stdc++.h>
using namespace std;

bool compare_by_a(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}

int  main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for(auto&& v : a) cin >> v;
    vector<pair<int, int>> tou(n);
    for(int i=0;i<n;i++){
        tou[i].first = i+1;
        tou[i].second = 0;
    }
    int now_saita = a[0];
    tou[a[0]-1].second += 1;
    cout << tou[now_saita-1].first << endl;
    for(int i=1;i<m;i++){
        tou[a[i]-1].second += 1;
        if(tou[now_saita-1].second < tou[a[i]-1].second){
            now_saita = tou[a[i]-1].first;
            cout << tou[now_saita-1].first << endl;
        }else if(tou[now_saita-1].second == tou[a[i]-1].second){
            cout << min(tou[now_saita-1].first, tou[a[i]-1].first) << endl;
            now_saita = min(tou[now_saita-1].first, tou[a[i]-1].first);
        }else{
            cout << tou[now_saita-1].first << endl;
        }
    }
    return 0;
}