#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<long long> s;
    int count = 0;
    for(int i=0;i<n;i++){
        long long a;
        cin >> a;
        if(s.find(a) == s.end()) s.insert(a);
        else{
            s.erase(a);
            count++;
        }
    }
    cout << count << endl;
    return 0;
}