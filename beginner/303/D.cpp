#include <bits/stdc++.h>

using namespace std;

long long countno(string s, char a, int i){
    long long count = 1;
    while(s[i] == a){
        count++;
        i++;
    }
    return count;
}

int main(){
    long long x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    char caps = 0;
    int i = 0;
    long long time = 0;
    while(i < (int)s.length()){
        long long count = countno(s, s[i], i);
        if(s[i] == 'a'){
            long long tmp1, tmp2, tmp3;
            if(caps == 0){
                tmp1 = count * x;
                time += tmp1;
            }else{
                tmp2 = count * y;
                tmp3 = z + (count * x);
                if(tmp2 < tmp3){
                    time += tmp2;
                }else{
                    time += tmp3;
                    caps = 1;
                }
            }
        }
        if(s[i] == 'A'){
            long long tmp1, tmp2, tmp3;
            if(caps == 1){
                tmp1 = count * x;
                time += tmp1;
            }else{
                tmp2 = count * y;
                tmp3 = z + (count * x);
                if(tmp2 < tmp3){
                    time += tmp2;
                }else{
                    time += tmp3;
                    caps = 0;
                }
            }
        }
        i += count;
    }
    cout << time << endl;
    return 0;
}