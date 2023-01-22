#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    ll ans = 1e18;
    for(int i = 0;i < n;i++){
        int cnt = 0;
        for (int j = 0; j < n / 2; j++) {
            if (s[j] != s[n - 1 - j]) {
                cnt++;
            }
        }
        string ns;
        for(int j = 1;j < s.size();j++){
            ns += s[j];
        }
        ns += s[0];
        s = ns;
        ans = min(ans,(ll)b*cnt+(ll)a*i);
    }

    cout << ans << endl;
}
