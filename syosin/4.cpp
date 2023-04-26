#include <iostream>
#include <vector>
using namespace std;

int counter(vector<int> a,int count,int N){
    for(int i=0;i<N;i++){
        if(a[i]%2 !=0) return count;
        a[i] = a[i] / 2;
    }
    count++;
    counter(a,count,N);
    return count;
}

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];
    int count = 0;
    count = counter(a,count,N);
    cout << count << endl;
    return 0;
}

