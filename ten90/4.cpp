#include <bits/stdc++.h>
using namespace std;

int a[2002][2002];
int tate[2002] , yoko[2002];

int main(){
    int H, W;
    cin>>H>>W;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            yoko[i] += a[i][j];
            tate[j] += a[i][j];
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << yoko[i] + tate[j] - a[i][j] << " \n"[j+1==W];
        }
    }
    return 0;
}