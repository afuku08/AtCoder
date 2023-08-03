#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    bool flag = false;
    if(A == B-1) flag = true;
    if(A==3&&B==4 || A==6&&B==7) flag = false;
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}