#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(auto&& x : A) cin >> x;

    for(int i=0;i<N;i++){
        int k=0;
        int first = i+1;
        vector<int> num;
        num.push_back(first);
        int tmp = first;
        while(k<N){
            int next = A[tmp-1];
            if(next == first){
                cout << num.size() << endl;
                for(int j=0;j<num.size();j++){
                    cout << num[j] << " ";
                }
                cout << endl;
                return 0;
            }
            num.push_back(next);
            tmp = next;
            k++;
        }
    }
    return 0;
}