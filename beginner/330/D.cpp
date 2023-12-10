#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(auto&& a : s) cin >> a;
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j] == 'o'){
                int x_count = 0;
                int y_count = 0;
                if(i==n-1 && j==n-1){
                    for(int retu=0;retu<n-1;retu++){
                        if(s[n-1][retu] == 'o') x_count++;
                    }
                    for(int gyou=0;gyou<n-1;gyou++){
                        if(s[gyou][n-1] == 'o') y_count++;
                    }
                    count += x_count * y_count;
                }else if(i==n-1){
                    for(int retu=j;retu<n;retu++){
                        if(s[n-1][retu] == 'o') x_count++;
                    }
                    for(int gyou = 0;gyou<n-1;gyou++){
                        if(s[gyou][j] == 'o') y_count++;
                    }
                    count += x_count * y_count;
                }else if(j==n-1){
                    for(int retu = 0;retu<n-1;retu++){
                        if(s[i][retu] == 'o') x_count++;
                    }
                    for(int gyou=i+1;gyou<n;gyou++){
                        if(s[gyou][n-1] == 'o') y_count++;
                    }
                    count += x_count * y_count;
                }else{
                    for(int retu = i+1;retu<n;retu++){
                        if(s[i][retu] == 'o') x_count++;
                    }
                    for(int gyou = j+1;gyou<n;gyou++){
                        if(s[gyou][j] == 'o') y_count++;
                    }
                    count += x_count * y_count;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}