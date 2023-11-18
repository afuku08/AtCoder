#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(auto&& a: d) cin >> a;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(i == 100) continue;
        if(i >= 10){
            if(i/10 != i%10) continue;
        }
        int num = i%10;
        for(int j=1;j<=d[i-1];j++){
            if(j == num || j == (num*10 + num)){
                count += 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}