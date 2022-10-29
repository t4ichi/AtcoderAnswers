#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n;
    vector<vector<int>> a(n+1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x].push_back(i);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l,r,x;
        cin >> l >> r >> x;

        auto itr = lower_bound(a[x].begin(),a[x].end(),r);
        auto itl = lower_bound(a[x].begin(),a[x].end(),l-1);

        cout << itr -itl << "\n";
    }
}
