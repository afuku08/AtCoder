#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n;i<=919;i++){
        int a = i/100;
        int b = (i-a*100)/10;
        int c = (i-a*100-b*10);
        if(a*b == c){
            cout << i << endl;
            break;
        }
    }
    return 0;
}