#include <bits/stdc++.h>
using namespace std;

    long long a[1010],b[1010];
    
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0; i<n; i++){
        cout << a[i] + b[i] << endl;
    }
    return 0;
}