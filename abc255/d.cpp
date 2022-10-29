#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;

    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    sort(a.begin(),a.end());

    vector<long long> s(n+1);
    for(int i = 0;i < n;i++){
        s[i+1] = s[i] + a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int k = lower_bound(a.begin(),a.end(),x) - a.begin();

        long long row = (long long)k * x - s[k];
        long long high = (s[n] - s[k]) - (long long)(n - k) * x;
        cout << row + high << "\n";

    }
}