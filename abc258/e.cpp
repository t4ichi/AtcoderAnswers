#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,q,x;
    cin >> n >> q >> x;

    vector<int> w(n);
    for(int i = 0;i < n;i++){
        cin >> w[i];
    }
    vector<int> k(q);
    for(int i = 0;i < q;i++){
        cin >> w[i];
        cout << w[i] << "\n";
    }

    
}