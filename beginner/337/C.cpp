#include <bits/stdc++.h>
using namespace std;

bool isOK(const vector<int>& a, int index, int key){
    if(a[index] >= key) return true;
    else return false;
}

int binary_search(const vector<int>& a, int key){
    int ng = -1;
    int ok = (int)a.size();
    while(abs(ok-ng)>1){
        int mid = (ng+ok)/2;
        if(isOK(a, mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());
    vector<int> use(n);
    for(int i=0;i<n;i++){
        use[i] = a[i].first;
    }
    sort(use.begin(), use.end());
    int target = a[0].second;
    cout << target << " ";

    for(int i=0;i<n-1;i++){
        int iter = binary_search(use, target);
        target = a[iter].second;
        cout << target << " ";
    }
    cout << endl;
    
    return 0;
}