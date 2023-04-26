#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];
    int alice = 0;
    int bob = 0;
    int turn = 1;

    while(true){
        if(a.empty()) break;
        int max_index = -1;
        int max_value = -10000000;
        for(int i=0;i<a.size();i++){
            if(a[i] > max_value){
                max_index = i;
                max_value = a[i];
            }
        }
        if(turn%2 == 1) alice += a[max_index];
        else bob += a[max_index];

        a.erase(a.begin() + max_index);
        ++turn;
    }
    cout << alice - bob << endl;
    return 0;
}