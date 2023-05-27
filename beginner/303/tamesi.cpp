#include <bits/stdc++.h>

using namespace std;

int main(){
    set<pair<int,int>> s;
    s.insert({1, 3});
    s.insert({1, 4});
    s.insert({2, 4});
    s.insert({1, 4});
    cout << s.size() << endl;
    return 0;
}