#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    bool flagA = false, flagB = false, flagC = false;
    for(int i=0;i<N;i++){
        if(S[i] == 'A') flagA = true;
        if(S[i] == 'B') flagB = true;
        if(S[i] == 'C') flagC = true;
        if(flagA && flagB && flagC){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}