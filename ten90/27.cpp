#include <bits/stdc++.h>
using namespace std;

string s[1 << 18];
int N;
map<string ,int> MAP;

int main(){
    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> s[i];
        if(MAP[s[i]] == 0){
            cout << i << endl;
            MAP[s[i]] = 1;
        }
    }
    return 0;
}