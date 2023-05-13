#include <iostream>
using namespace std;

bool isPrime(long long N){
    if(N<2) return false;
    for(long long i=2;i * i <= N;i++){
        if(N % i == 0) return false;
    }
    return true;
}

int main(){
    for(int i=1;i<=10;i++){
        cout << i << ":" << isPrime(i) << endl;
    }
    return 0;
}