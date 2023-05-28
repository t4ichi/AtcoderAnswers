#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, d, k;
        cin >> n >> d >> k;
        ll x = 0; // 最初に印をつけるマスの番号
        ll ans = 0;


        for (int i = 1; i <= n; i++) {
            // k 番目に印をつけるマスが見つかった場合、そのマスの番号を出力してループを終了する
            if (x <= k && k <= x + d * (i - 1)) {
                cout << x << endl;
                break;
            }
            x = (x + d) % n; // 次に印をつけるマスの番号を更新する
        }
    }
}
