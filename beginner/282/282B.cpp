#include <iostream>
using namespace std;

char S[32][32];

int main(){
    int N;
    int M;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> S[i][j];
        }
    }

    int counter = 0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            bool flag = true;
            for(int k=0;k<M;k++){
                if(S[i][k] == 'x' && S[j][k] == 'x'){
                    flag = false;
                    break;
                } 
            }
            if(flag) counter++;
        }
    }
    cout << counter << endl;
    return 0;
}