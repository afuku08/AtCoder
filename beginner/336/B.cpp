#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int count = 0;
    while(1){
        int i = n%2;
        if(i==0) count++;
        else break;
        n = n/2;
    }
    cout << count << endl;
    return 0;
}