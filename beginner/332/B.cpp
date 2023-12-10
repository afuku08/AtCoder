#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, g, m;
    cin >> k >> g >> m;
    int gr = 0, mu = 0;
    for(int i=0;i<k;i++){
        if(gr == g){
            gr = 0;
        }else if(mu == 0){
            mu = m;
        }else{
            if(mu >= g){
                int move = g - gr;
                gr = g;
                mu = mu - move;
            }else{
                gr += mu;
                mu = 0;
            }
        }
    }
    cout << gr << " " << mu << endl;
}