#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, a = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'T'){
            t++;
        }else{
            a++;
        }
        if(n%2 == 0){
        if(t == n/2){
            cout << "T" << endl;
            return 0;
        }
        if(a == n/2){
            cout << "A" << endl;
            return 0;
        }
        }
    }
    if(t > a){
        cout << "T" << endl;
    }else{
        cout << "A" << endl;
    }
    return 0;
}