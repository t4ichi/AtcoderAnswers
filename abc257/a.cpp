#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    char ans = 'A' + (x-1)/n;
    cout << ans << "\n";
}