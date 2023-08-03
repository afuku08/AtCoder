#include <bits/stdc++.h>
using namespace std;

int main(){
    int ha, wa, hb, wb, hx, wx;
    cin >> ha >> wa;
    vector<string> A(ha);
    for(auto&& x : A) cin >> x;
    cin >> hb >> wb;
    vector<string> B(hb);
    for(auto&& x : B) cin >> x;
    cin >> hx >> wx;
    vector<string> X(hx);
    for(auto&& x : X) cin >> x;

    int mh, mw;
    mh = max(ha, hb);
    mw = max(wa, wb);

    bool flag = false;

    for(int i=0; i<mh; i++){
        for(int j=0; j<mw; j++){
            vector<string> C(mh+i);
            for(int l=0; l<mh+i; l++){
                string tmp(mw + j, '.');
                if(ha < i){
                    for(int k=0; k<wa; k++){
                        tmp[k] = A[l][k];
                    }
                }
                if(hb < i){
                    for(int k=j; k<j+wb; k++){
                        if(B[l][k] == '#'){
                            tmp[k] = '#';
                        }
                    }
                }
                C[l] = tmp;
            }
            for(int k=0;k<C.size()-hx; k++){
                for(int l=0; l<C[k].length()-wx; l++){
                    bool flag2 = true;
                    for(int m=0;m<hx;m++){
                        for(int n=0;n<wx;n++){
                            if(X[m][n] != C[k+m][l+n]) flag2 = false;
                        }
                    }
                    if(flag2) flag = true;
                }
            }
        }
    }

    for(int i=0; i<mh; i++){
        for(int j=0; j<mw; j++){
            vector<string> C(mh+i);
            for(int l=0; l<mh+i; l++){
                string tmp(mw + j, '.');
                if(hb < i){
                    for(int k=0; k<wb; k++){
                        tmp[k] = B[l][k];
                    }
                }
                if(ha < i){
                    for(int k=j; k<j+wa; k++){
                        if(A[l][k] == '#'){
                            tmp[k] = '#';
                        }
                    }
                }
                C[l] = tmp;
            }
            for(int k=0;k<C.size()-hx; k++){
                for(int l=0; l<C[k].length()-wx; l++){
                    bool flag2 = true;
                    for(int m=0;m<hx;m++){
                        for(int n=0;n<wx;n++){
                            if(X[m][n] != C[k+m][l+n]) flag2 = false;
                        }
                    }
                    if(flag2) flag = true;
                }
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}