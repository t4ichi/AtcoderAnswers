#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0;i < m;i++){
        cin >>  b[i];
        ans += a[b[i]-1];
    }
    cout << ans << "\n";
}
