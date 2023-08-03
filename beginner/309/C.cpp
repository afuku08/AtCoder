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
    //for(int i=0;i<v.size();i++) cout << v[i].first << " " << v[i].second << endl;

    vector<pair<long long, long long>> kirei;

    for(int i=0;i<N;i++){
        long long index = v[i].first;
        long long su = v[i].second;
        //cout << index << endl;
        while(v[i+1].first == index){
            su += v[i].second;
            i++;
        }
        //kirei.push_back(pair(index, su));
        kirei.emplace_back(index, su);
    }

    //for(int i=0;i<kirei.size();i++) cout << kirei[i].first << ":" << kirei[i].second << endl;

    if(sum <= K){
        cout << "1" << endl;
        return 0;
    }

    long long day = 0;
    for(long long i=0;i<kirei.size();i++){
        day = kirei[i].first;
        sum -= kirei[i].second;
        if(sum <= K) break;
    }
    cout << day+1 << endl;
    return 0;
}