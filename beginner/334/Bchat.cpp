#include<bits/stdc++.h>
using namespace std;

int main() {
    long long A, M, L, R;
    std::cin >> A >> M >> L >> R;

    // ツリーを立てる座標の計算
    long long treeCoordinates = A;
    long long treeCount = 0;

    if(L < R){
        swap(L, R);
    }

    while (treeCoordinates <= R) {
        if (treeCoordinates >= L) {
            // 高橋君と青木君の間にツリーがある場合
            treeCount++;
        }

        // 次の座標を計算
        treeCoordinates += M;
    }

    std::cout << treeCount << std::endl;

    return 0;
}