#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N;
    vector<int> a(N);
    for(auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    cin >> Q;
    for(int i=0;i<Q;i++){
        int b;
        cin >> b;
        auto it = lower_bound(a.begin(), a.end(), b);
        int index = it - a.begin();
        int min = abs(b - a[index]);
        if(index > N-1) min = abs(b - a[N-1]);
        else{
            if(index == 0) min = abs(b-a[0]);
            else{
                min = abs(b-a[index]);
                int tmp = abs(b-a[index-1]);
                if(min > tmp) min = tmp;
            }
        }
        cout << min << endl;
    }
    return 0;
}