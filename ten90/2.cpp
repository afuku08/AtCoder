#include <bits/stdc++.h>
using namespace std;

bool func(string str){
    int depth = 0;
    for(int i=0;i<str.size();i++){
        if(str[i] == '(') depth++;
        if(str[i] == ')') depth--;
        if(depth < 0) return false;
        }
    if(depth == 0) return true;
    return false;
}

int main(){
    int N;
    cin >> N;
    for(int bit=0;bit<(1 << N); bit++){
        string str = "";
        for(int i=N-1;i>=0;i--){
            if((bit & (1 << i)) == 0){
                str += "(";
            }else{
                str += ")";
            }
        }
        if(func(str)) cout << str << endl;
    }
    return 0;
}