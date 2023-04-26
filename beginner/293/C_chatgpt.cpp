#include <iostream>
#include <vector>
using namespace std;

const int MAX_H = 10;
const int MAX_W = 10;
const int MAX_MASK = (1 << MAX_W);

int H, W;
int A[MAX_H][MAX_W];
int dp[MAX_H][MAX_W][MAX_MASK];

int main() {
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    dp[0][0][1 << 0] = 1;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            for (int S = 0; S < MAX_MASK; S++) {
                if (i == 0 && j == 0) continue;
                if (!(S & (1 << j))) continue;
                if (A[i][j] != __builtin_popcount(S)) continue;
                for (int k = 0; k < 2; k++) {
                    int ni = i + (k == 0), nj = j + (k == 1);
                    if (ni >= H || nj >= W) continue;
                    dp[ni][nj][S | (1 << nj)] += dp[i][j][S];
                }
            }
        }
    }

    int ans = dp[H - 1][W - 1][(1 << W) - 1];
    cout << ans << endl;
    return 0;
}