#include <bits/stdc++.h>
using namespace std;
    string str;
int main(){
    cin >> str;
    str[str.size()] = '\0';
    unsigned long long n=0;
    long long count = 0;
    while(true){
        if(str[n]=='\0') break;
        if(str[n]=='0'){
            if(str[n+1]=='0'){
                count++;
                n += 2;
            }else{
                count++;
                n++;
            }
        }else{
            count++;
            n++;
        }
    }
    cout << count << endl;
    return 0;
}