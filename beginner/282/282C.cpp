#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    stack<char> stack;
    cin >> N >> S;
    for(int i=0;i<N;i++){
        if(S[i]==','){
            if(stack.empty()) S[i] = '.';
        }
        if(S[i]=='"'){
            if(stack.empty()) stack.push(S[i]);
            else stack.pop();
        }
    }
    cout << S << endl;
    return 0;
}