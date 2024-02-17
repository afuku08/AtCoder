#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, d;
    cin >> a >> b >> d;
    while(1){
        cout << a;
        a += d;
        if(a > b) break;
        cout << " ";

    }
    cout << endl;
    return 0;
}