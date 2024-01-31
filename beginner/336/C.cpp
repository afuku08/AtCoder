#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    n -= 1;
    bool f = (n%5 == 0);
    long long waru = 5;
    vector<int> save;
    while(1){
        int i = n % 5;
        save.push_back(i);
        n = n / waru;
        //waru *= 5;
        if(n < 5){
            save.push_back(n);
            break;
        }
    }

    long long ans = 0;
    long long g = 1;
    
    //if(f) save[save.size()-1] -= 1;
    for(int i=0;i<save.size();i++){
        //cout << save[i] << endl;
        ans += save[i] * 2 * g;
        g *= 10;
    }
    cout << ans << endl;
    return 0;
}