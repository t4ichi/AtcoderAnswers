#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0;i < n;i++)cin >> a[i];
    sort(a.begin(),a.end());
    
    for(int i = 0;i < q;i++){
        int x;
        cin >> x;
        cout << a.end() - lower_bound(a.begin(),a.end(),x) << "\n";
    }
}
