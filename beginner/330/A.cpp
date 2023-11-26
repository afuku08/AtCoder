#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    int a[110];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i=1;i<=n;i++){
        if(a[i] >= l){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}