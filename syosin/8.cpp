#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int a[110];
    cin >> N;
    for(int i=0;i<N;++i) cin >> a[i];

    sort(a,a + N, greater<int>());
    int thoku =  2000000;
    int count = 0;
    for(int i=0;i<N;++i){
        if(a[i] < thoku){
            thoku = a[i];
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}