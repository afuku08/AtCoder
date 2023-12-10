#include <bits/stdc++.h>

using namespace std;

class BIT {
public:
    BIT(int size) : tree(size + 1, 0) {}

    void add(int i, int x) {
        i++;
        while (i < tree.size()) {
            tree[i] += x;
            i += i & -i;
        }
    }

    int query(int i) {
        i++;
        int result = 0;
        while (i > 0) {
            result += tree[i];
            i -= i & -i;
        }
        return result;
    }

private:
    vector<int> tree;
};

vector<int> solve(int N, const vector<long long>& A) {
    vector<int> result;
    BIT bit(1000000);

    for (int i = N - 1; i >= 0; --i) {
        int greater_sum = bit.query(A[i]);
        result.push_back(greater_sum);
        bit.add(A[i], 1);
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    // 入力の例
    int N;
    cin >> N;
    vector<long long> A(N);
    for(auto&& v : A) cin >> v;

    // 解答の取得
    vector<int> answer = solve(N, A);

    // 結果の表示
    for (int i = 0; i < N; ++i) {
        cout << answer[i] << " ";
    }

    return 0;
}