#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string str;
    cin >> str;

    stack<int> par;

    for(int i=0; i<str.length(); i++){
        if(str[i] == '(') par.push(i);
        if(str[i] == ')'){
            if(par.empty()) continue;
            int index = par.top();
            par.pop();
            str.erase(index, i - index + 1);
            i = index - 1;
        }
    }
    cout << str << endl;
    return 0;
}