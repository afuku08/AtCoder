#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sita = n%10;
    int ue = n/10;
    if(sita < 3){
        cout << ue * 10 << endl;
    }else if(sita > 2 && sita < 8){
        cout << ue * 10 + 5 << endl;
    }else{
        cout << ue * 10 + 10 << endl;
    }
    return 0;
}