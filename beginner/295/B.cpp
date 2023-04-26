#include <bits/stdc++.h>
using namespace std;

char cha[21][21];

int main(){
    int r, c;
    cin >> r >> c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin >> cha[i][j];
        }
    }

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(cha[i][j] != '.' && cha[i][j] != '#'){
                int tmp = cha[i][j] - '0';
                cha[i][j] = '.';
                for(int k=1;k<=r;k++){
                    for(int l=1;l<=c;l++){
                        if((abs(i-k) + abs(j-l)) <= tmp && cha[k][l] == '#') cha[k][l] = '.';
                    }
                }
            }
        }
    }

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout << cha[i][j];
        }
        cout << endl;
    }
    return 0;
}