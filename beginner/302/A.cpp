#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long count = 0;
    if(a % b == 0){
        count = a / b;
    }else{
        count = a / b + 1;
    }
    cout << count << endl;
    return 0;
}