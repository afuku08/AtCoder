#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> P(N), C(N);
    vector<vector<int>> F(N, vector<int>(M));
    for(int i=0;i<N;i++){
        cin >> P[i] >> C[i];
        F[i].resize(C[i]);
        for(int j=0;j<C[i];j++){
            cin >> F[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j) continue;

            vector<bool> Bool(C[i],false);
            bool flag = true;

            if(P[i] < P[j]){
                flag = false;
            }

            for(int k=0;k<C[i];k++){
                for(int l=0;l<C[j];l++){
                    if(F[i][k] == F[j][l]){
                        Bool[k] = true;
                    }
                }
            }

            for(int k=0;k<C[i];k++){
                //cout << Bool[k] << endl;
                if(Bool[k] == false){
                    flag = false;
                }
            }

            if(!flag) continue;

            if(P[i] > P[j]){
                cout << "Yes" << endl;
                return 0;
            }

            for(int k=0;k<C[j];k++){
                if(find(F[j].begin(), F[j].end(), F[i][k]) == F[j].end()){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}