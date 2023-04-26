#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int count = 0;
    for(int i=0;i<str.size()-1;i++){
        int counter[10];
        for(int tmp = 0;tmp<10;tmp++){
            counter[tmp] = 0;
        }
        for(int j=i;j<str.size();j++){
            bool flag = true;
            if(str[j] == '0') counter[0]++;
            if(str[j] == '1') counter[1]++;
            if(str[j] == '2') counter[2]++;
            if(str[j] == '3') counter[3]++;
            if(str[j] == '4') counter[4]++;
            if(str[j] == '5') counter[5]++;
            if(str[j] == '6') counter[6]++;
            if(str[j] == '7') counter[7]++;
            if(str[j] == '8') counter[8]++;
            if(str[j] == '9') counter[9]++;
            for(int k=0;k<10;k++){
                if(counter[k] % 2 != 0) flag = false;
            }
            if(flag) count++;
        }
    }
    cout << count << endl;
    return 0;
}