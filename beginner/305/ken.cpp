#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(20);
    v.push_back(40);
    v.push_back(66);
    v.push_back(100);
    auto x = (upper_bound(v.begin(), v.end(), 0) - v.begin());
    cout << x << endl;
    return 0;
}