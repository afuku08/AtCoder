#include <bits/stdc++.h>
using namespace std;

bool desc_asc(pair<int, int>& left, pair<int, int>& right) {
    if (left.first == right.first) {
    return left.second < right.second;
    } else {
    return right.first < left.first;
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(auto&& a : v) cin >> a;
    

    vector<pair<int, int>> vp(n);

    for(int i=0;i<n;i++){
        int wins = 0;
        for(int j=0;j<n;j++){
            if(v[i][j] == 'o') wins++;
        }
        vp[i].first = wins;
        vp[i].second = i+1;
    }

    sort(vp.begin(), vp.end(), desc_asc);

    for(int i=0;i<n;i++){
        cout << vp[i].second << " ";
    }
    cout << endl;
    return 0;
}