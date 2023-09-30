#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    string S, T;
    cin >> N >> M >> S >> T;
    bool front = true;
    bool back = true;

    for(int i=0; i<N; i++){
        if(S[i] != T[i]){
            front = false;
        }
    }

    for(int i=0; i<N; i++){
        if(S[N-i-1] != T[M-i-1]){
            back = false;
        }
    }

    if(front && back){
        cout << "0" << endl;
    }else if(front){
        cout << "1" << endl;
    }else if(back){
        cout << "2" << endl;
    }else{
        cout << "3" << endl;
    }
    return 0;
}