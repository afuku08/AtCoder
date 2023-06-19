#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<string> s(n);
    vector<int> year(n);
    for(int i=0;i<n;i++){
        cin >> s[i] >> year[i];
    }
    long long min = 1 << 30;
    int index = -1;
    for(int i=0;i<n;i++){
        if(min > year[i]){
            index = i;
            min = year[i];
        }
    }
    for(int i=0;i<n;i++){
        cout << s[(i+index)%n] << endl;
    }
    return 0;
}