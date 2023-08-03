#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> str(N);
    for(auto&& x : str) cin >> x;

    deque<char> c;
    for(int i=0; i<N; i++) c.push_back(str[0][i]);
    for(int i=1; i<N-1;i++) c.push_back(str[i][N-1]);
    for(int i=N-1; i>=0; i--) c.push_back(str[N-1][i]);
    for(int i=N-2; i>=1; i--) c.push_back(str[i][0]);

    //for(int i=0;i<N*4-4;i++) cout << c[i];

    char last = c.back();
    c.pop_back();
    c.push_front(last); 

    int count = 0;

    for(int i=0; i<N; i++){
        str[0][i] = c[count];
        count++;
    }
    for(int i=1; i<N-1;i++){
        str[i][N-1] = c[count];
        count++;
    }
    for(int i=N-1; i>=0; i--){
        str[N-1][i] = c[count];
        count++;
    }
    for(int i=N-2; i>=1; i--){
        str[i][0] = c[count];
        count++;
    } 
    for(int i=0;i<N;i++){
        cout << str[i] << endl;
    }
    return 0;
}