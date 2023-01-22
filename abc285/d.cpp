#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string,string> m;

    for (int i = 0; i < n; i++) {
        string s, t;
        cin >> s >> t;
        m[s] = t;
    }

    cout << "Yes" << endl;
    return 0;
}
