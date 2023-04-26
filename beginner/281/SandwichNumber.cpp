#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    bool flag = true;
    if(S.length() == 8){
        if(!isupper(S[0])) flag = false;
        for(int i=1;i<=6;++i){
            if(S[i] < 48 || S[i] > 57)
            flag = false;
        }
        if(S[1] == '0') flag = false;
        if(!isupper(S[7])) flag = false;
    }else{
        flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}