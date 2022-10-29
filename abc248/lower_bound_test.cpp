#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {1, 1, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
    size_t len = vec.size();
    int key = 6;

    // 二分探索
    auto iter_lower = lower_bound(vec.begin(), vec.end(), key);
    auto iter_upper = upper_bound(vec.begin(), vec.end(), key);

    // インデックスを取得
    long idx_lower = distance(vec.begin(), iter_lower);  // vec[idx_lower] = vec[7] = 6
    long idx_upper = distance(vec.begin(), iter_upper);  // vec[idx_upper] = vec[8] = 8

    // lower_bound で要素数を数える
    cout << "6 未満の要素数は " << idx_lower << "\n";  // 6 までの要素数 (idx_lower + 1) - 1
    cout << "6 以上の要素数は " << len - idx_lower << "\n";  // 6 までの要素数 (idx_lower + 1) - 1

    // lower_bound で要素数を数える
    cout << "6 以下の要素数は " << idx_upper << "\n";  // 6 までの要素数 (idx_lower + 1) - 1
    cout << "6 より大きい数の要素数は " << len - idx_upper << "\n";  // 6 までの要素数 (idx_lower + 1) - 1

    return 0;
}