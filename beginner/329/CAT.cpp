#include <iostream>
#include <set>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;

    // 使用されている文字を保持する set
    std::set<char> uniqueCharacters;

    // 部分文字列の数をカウントする変数
    long long count = 0;

    for (int i = 0; i < N; ++i) {
        // 文字が新しい場合、新しい部分文字列が始まる
        if (uniqueCharacters.find(S[i]) == uniqueCharacters.end()) {
            uniqueCharacters.insert(S[i]);
            count += (i + 1); // i番目の文字から始まる部分文字列の数は i + 1
        } else {
            // すでに使われている文字の場合、新しい部分文字列が始まる
            uniqueCharacters.clear();
            uniqueCharacters.insert(S[i]);
            count += 1; // 新しい部分文字列の数は 1
        }
    }

    std::cout << count << std::endl;

    return 0;
}