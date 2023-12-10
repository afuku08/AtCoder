#include<bits/stdc++.h>
using namespace std;

int main(){
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;
    int tom_y, tom_m, tom_d;
    tom_y = y;
    tom_m = m;
    tom_d = d + 1;
    if(tom_d > D){
        tom_d = 1;
        tom_m = m+1;
        if(tom_m>M){
            tom_y = y+1;
            tom_m = 1;
        }
    }
    cout << tom_y << " " << tom_m << " " << tom_d << endl;
    return 0;
}