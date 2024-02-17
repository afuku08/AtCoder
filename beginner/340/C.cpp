#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> v;
    v.push_back(n);
    long long i = 0;
    long long score = 0;
    while(1){
        cout << v.size() << endl;
        score += v[i];
        long long tmp = v[i]/2;
        if(v[i] % 2 == 0){
            if(tmp > 1) v.push_back(tmp);
            if(tmp > 1) v.push_back(tmp);
        }else{
            if(tmp > 1) v.push_back(tmp);
            if((tmp+1) > 1) v.push_back(tmp+1);
        }
        
        if((i+1) == v.size()) break;
        i++;
    }
    cout << score << endl;
    return 0;
}