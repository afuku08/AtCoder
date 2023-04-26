#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> vec(n);
    for(auto& x: vec) cin >> x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(vec[i] == "and" || vec[i] == "not" || vec[i] == "that" || vec[i] == "the" || vec[i] == "you") flag = true;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}