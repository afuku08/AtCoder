#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for(auto&& v : a) cin >> v;
    sort(a.begin(), a.end());
    /*
    vector<long long> kosuu(a[n-1]);
    int index = 0;
    if(a[index] == 0){
        kosuu[0] = 1;
        index = 1;
    }else{
        kosuu[0] = 0;
    }
    for(long long i=1;i<=a[n-1];i++){
        if(i == a[index]){
            kosuu[i] = kosuu[i-1] + 1;
            index++;
            while(1){
                if(a[index] == a[index-1]){
                    kosuu[i]++;
                    index++;
                }else{
                    break;
                }
            }
        }else{
            kosuu[i] = kosuu[i-1];
        }
    }

    for(long long i=0;i<n-m;i++){
        int now = kosuu[i+m] - kosuu[i];
        max_count = max(max_count, now);
    }
    */
    int max_count = 0;
    for(long long i=0;i<a[n-1]-m;i++){
        int count = 0;
        for(long long j=i;j<i+m;j++){
            if(j == a[j]) count++;
        }
        max_count = max(max_count, count);
    }
    cout << max_count << endl;
    return 0;
}