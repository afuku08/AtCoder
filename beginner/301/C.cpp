#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int n = s.length();
    int al[26];
    for(int i=0;i<26;i++){
        al[i] = 0;
    }
    int sat=0, tat=0;
    //sort(s.begin(), s.end());
    //sort(t.begin(), t.end());
    for(int i=0;i<n;i++){
        if(s[i] == '@') sat++;
        if(t[i] == '@') tat++;
    }
    
    for(int i=0;i<n;i++){
        if(s[i] != '@'){
            al[s[i] -'a']++;
        }
        if(t[i] != '@'){
            al[t[i] -'a']--;
        }
    }
    
    if(al[1]!=0 || al[5]!=0 || al[6]!=0 || al[7]!=0 || al[8]!=0 || al[9]!=0 || al[10]!=0 || al[11]!=0 || al[12]!=0 || al[13]!=0 || 
    al[15]!=0 || al[16]!=0 || al[18]!=0 || al[20]!=0 || al[21]!=0 || al[22]!=0 || al[23]!=0 || al[24]!=0 || al[25]!=0){
        cout << "No" << endl;
        return 0;
    }
    int tmp = abs(al[0]) + abs(al[2]) + abs(al[3]) + abs(al[4]) + abs(al[14]) + abs(al[17]) + abs(al[19]);
    int at = sat + tat;
    if(at >= tmp){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}