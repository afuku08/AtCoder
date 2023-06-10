#include <bits/stdc++.h>
using namespace std;

int main(){
    char p, q;
    cin >> p >> q;
    int kyori[6] = {3, 1, 4, 1, 5, 9};
    int start = p - 'A';
    int end = q - 'A';
    if(start > end){
        swap(start, end);
    }
    int ans = 0;
    for(int i = start; i < end; i++){
        ans += kyori[i];
    }
    cout << ans << endl;
    return 0;
}