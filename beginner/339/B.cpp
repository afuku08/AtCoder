#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<string> field(h);

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            field[i] += ".";
        }
    }

    int now_x = 0, now_y = 0;
    int muki = 1;

    for(int i=0;i<n;i++){
        if(field[now_y][now_x] == '.'){
            field[now_y][now_x] = '#';
            muki += 1;
            if(muki == 5){
                muki = 1;
            }
        }else{
            field[now_y][now_x] = '.';
            muki -= 1;
            if(muki == 0){
                muki = 4;
            }
        }
        if(muki == 1) now_y -= 1;
        if(muki == 2) now_x += 1;
        if(muki == 3) now_y += 1;
        if(muki == 4) now_x -= 1;
        
        if(now_x == -1) now_x = w-1;
        if(now_x == w) now_x = 0;
        if(now_y == -1) now_y = h-1;
        if(now_y == h) now_y = 0;

    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << field[i][j];
        }
        cout << endl;
    }
    return 0;
}