#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int t, x;
        cin >> t >> x;
        if(t == 1){
            vec.insert(vec.begin(),x);
        }else if(t == 2){
            vec.push_back(x);
        }else{
            cout << vec[x-1] << endl;
        }
    }
    return 0;
}