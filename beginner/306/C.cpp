#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v(3 * N);
    for(auto&& a : v) cin >> a;
    vector<int> search(N, 0);
    for(int i=0; i<3*N; i++){
        search[v[i]-1]++;
        if(search[v[i]-1] == 2){
            cout << v[i] << " ";
        }
    }
    return 0;
}