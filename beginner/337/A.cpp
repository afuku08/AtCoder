#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int countx = 0, county = 0;
    for(int i=0;i<n;i++){
        int x, y;
        cin >> x >> y;
        countx += x;
        county += y;
    }
    if(countx > county) cout << "Takahashi" << endl;
    else if(countx == county) cout << "Draw" << endl;
    else cout << "Aoki" << endl;
    return 0;
}