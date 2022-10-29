#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k,q;
    cin >> n >> k >> q;

    vector<int> a(k);
    for(int i = 0;i < k;i++) cin >> a[i];
    vector<int> l(q);
    for(int i = 0; i < q; i++){
        cin >> l[i];
        int index = l[i]-1;
        if(a[index] == n) continue;
        if(a[index]+1 == a[index+1]) continue;
        a[index]++;
    }

    for(int i = 0; i < k;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}