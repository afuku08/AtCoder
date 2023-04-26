#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];
    int count = 0;
    while(true){
        bool flag = false;
        for(int i=0;i<N;i++) if(a[i] % 2 != 0) flag = true;
    
    if(flag) break;
    for(int i=0;i<N;i++) a[i] = a[i] / 2;
    count++;
    }
    cout << count << endl;
    return 0;
}