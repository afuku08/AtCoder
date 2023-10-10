#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> point(m);
    for(auto&& a : point) cin >> a;
    vector<string> s(n);
    for(auto&& a : s) cin >> a;
    vector<int> playerpoints(n);

    for(int i=0;i<n;i++){
        int playpoint = 0;
        for(int j=0;j<m;j++){
            if(s[i][j] == 'o'){
                playpoint += point[j];
            }
        }
        playerpoints[i] = playpoint + i;
    }

    for(int i=0;i<n;i++){
        
        int maxpoint = 0;
        for(int j=0;j<n;j++){
            if(i != j){
                maxpoint = max(maxpoint, playerpoints[j]);
            }
        }

        vector<int> p;
        copy(point.begin(), point.end(), back_inserter(p));
        //cout << point.size() << endl;
        int counter = 0;
        for(int j=0;j<m;j++){

            //cout << j << " " << counter << endl;
            if(s[i][j] == 'o'){
                //cout << j << endl;
                p.erase(p.begin()+(j-counter));
                counter++;
            }
        }
//cout << "kaku" << endl;
        sort(p.rbegin(), p.rend());

        int count = 0;

        int nowpoint = playerpoints[i];
        for(int j=0;j<p.size();j++){
            if(nowpoint > maxpoint){
                break;
            }
            nowpoint += p[j];
            count++;
        }
        cout << count << endl;
    }
    return 0;
}