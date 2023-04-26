#include <bits/stdc++.h>
using namespace std;

int a[110];
stack<int> s;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        cin >> a[i];
    }
    int tmp = 1;
    for(int i=1;i<=n;i++){
        if(a[tmp] == i){
            s.push(i);
            tmp++;
        }else{
            cout << i << " ";
            int size = s.size();
            for(int j = 0;j<size;j++){
                cout << s.top() << " ";
                s.pop();
            }
        }
    }
    return 0;
}