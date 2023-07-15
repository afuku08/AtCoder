#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    long long sum = 0;
    vector<pair<long long, long long>> v;
    for(int i=0;i<N;i++){
        long long a, b;
        cin >> a >> b;
        sum += b;
        //v.push_back(make_pair(a,b));
        v.emplace_back(a,b);
    }
    //for(int i=0;i<v.size();i++) cout << v[i].first << " " << v[i].second << endl;
    sort(v.begin(),v.end());

    if(sum <= K){
        cout << "1" << endl;
        return 0;
    }

    for(int i=0;i<N;i++){
        sum -= v[i].second;
        if(sum <= K){
            cout << v[i].first + 1 << endl;
            break;
        } 
    }
    return 0;
}