#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto&& x : v){
        cin >> x;
    }
    for(int i=0;i<n-1;i++){
        if(abs(v[i] - v[i+1]) != 1){
            cout << v[i] << " ";
            if(v[i] > v[i+1]){
                for(int j=v[i]-1;j>v[i+1];j--){
                    cout << j << " ";
                }
            }else{
                for(int j=v[i]+1;j<v[i+1];j++){
                    cout << j << " ";
                }
            }
        }else{
            cout << v[i] << " ";
        }
    }
    cout << v[n-1] <<  endl;
    return 0;
}