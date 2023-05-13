#include <iostream>
using namespace std;

bool isPrime(long long N){
    if(N<2) return false;
    for(long long i=2;i * i <= N;i++){
        if(N % i == 0) return false;
    }
    return true;
}

long long countPrime(long long N){
    long long ans = 0;
    for(long long i=2;i <= N;i++){
        if(isPrime(i)) ans ++;
    }
    return ans;
}

int main(){
    cout << countPrime(300000) << endl;
    return 0;
}