#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    vector<vector<int>> a(n);
    for(int i = 0;i < n;i++){
        int l;
        cin >> l;
        for(int j = 0;j < l;j++){
            int k;
            cin >> k;
            a[i].push_back(k);
        }
    }
    for(int i = 0;i < q;i++){
        int s,t;
        cin >> s >> t;
        s--;t--;
        cout << a[s][t] << "\n";
    }
}