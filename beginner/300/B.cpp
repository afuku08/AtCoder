#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w)), b(h, vector<char>(w)); 
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> b[i][j];
        }
    }

    vector<vector<char>> tmp(h, vector<char>(w));

    for(int i=0;i<h;i++){
        if(i==0){
            for(int k=0;k<h;k++){
                for(int l=0;l<w;l++){
                    tmp[k][l] = a[k][l];
                }
            }
        }
        else{
            for(int ix=0;ix<w;ix++){
                tmp[h-1][ix] = a[0][ix];
            }
            for(int iy=0;iy<h-1;iy++){
                for(int ix=0;ix<w;ix++){
                    tmp[iy][ix] = a[iy+1][ix];
                }
            }
        }
        for(int k=0;k<h;k++){
            for(int l=0;l<w;l++){
                a[k][l] = tmp[k][l];
            }
        }
        for(int j=0;j<w;j++){
            if(i==0){
                for(int k=0;k<h;k++){
                    for(int l=0;l<w;l++){
                        tmp[k][l] = a[k][l];
                }
            }
            }else{
                for(int iy=0;iy<h;iy++){
                    tmp[iy][w-1] = a[iy][0];
                }
                for(int ix=0;ix<w-1;ix++){
                    for(int iy=0;iy<h;iy++){
                        tmp[iy][ix] = a[iy][ix+1];
                    }
                }
            }

            for(int k=0;k<h;k++){
                for(int l=0;l<w;l++){
                    a[k][l] = tmp[k][l];
                }
            }

            /*for(int x=0;x<h;x++){
                for(int y=0;y<w;y++){
                    cout << tmp[x][y] << " ";
                }
                cout << endl;
            }*/
            bool flag = true;
            for(int x=0;x<h;x++){
                for(int y=0;y<w;y++){
                    if(tmp[x][y] != b[x][y]) flag = false;
                }
            }
            if(flag){
            cout << "Yes" << endl;
            return 0;
        }
        }

    }

    cout << "No" << endl;

    return 0;
}