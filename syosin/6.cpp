#include <iostream>
using namespace std;

int func(int num){
    int sum = 0;
    while(true){
        sum += num%10;
        if(num/10 == 0) break;
        num = num / 10;
    }
    return sum;
}

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int res = 0;
    for(int i=1;i<=N;i++){
        int sum = func(i);
        if(sum >= A && sum <= B) res += i;
    }
    cout << res << endl;
    return 0;
}