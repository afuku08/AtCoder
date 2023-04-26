#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string str;
    cin >> N >> str;
    for(int i=0;i<N;i++){
        if(str[i] == 'n'){
            if(str[i+1] == 'a'){
                str.insert(i+1,"y");
                N++;
            }
        }
    }
    cout << str << endl;
    return 0;
}