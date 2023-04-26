#include <bits/stdc++.h>
using namespace std;

string str[1010];
vector<string> str1;

int main(){
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    for(int i=0;i<k;i++){
        str1.push_back(str[i]);
    }
    sort(str1.begin(),str1.end());
    for(int i=0;i<k;i++){
        cout << str1[i] << endl;
    }
    return 0;
}