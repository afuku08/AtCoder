#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, k;
    cin >> i >> j >> k;
    cout << i * j * k % 5 << endl;
    cout << i * j % 5 * k % 5<< endl;
    return 0;
}