#include <bits/stdc++.h>
using namespace std;

long double T, L, X, Y;
long double PI = 3.14159265358979;

int main(){
    cin >> T >> L >> X >> Y;
    int Q;
    cin >> Q;
    for(int i=0;i<Q;i++){
        int E;
        cin >> E;
        long double cx = 0;
        long double cy = -(L / 2.0) * sin(E / T * 2.0 * PI);
        long double cz = (L/2.0) - (L/2.0) * cos(E / T * 2.0 * PI);
        long double d1 = sqrt((cx - X) * (cx - X) + (cy - Y) * (cy - Y));
        long double d2 = cz;
        long double kaku = (double)atan2(d2, d1) * 180.0L / PI;;
        cout << setprecision(12) << kaku << endl;
        }
    return 0;
}