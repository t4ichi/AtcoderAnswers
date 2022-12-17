#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0;i < n;i++){
        cin >> p[i];
    }

    vector<int> cnt(n,0);
    for(int i = 0;i < n;i++){
        for(int j = -1;j <= 1;j++){
            cnt[(p[i]-i+j+n)%n]++;
        }
    }
    int ans = 0;
    for(int i = 0;i < n;i++){
        ans = max(ans,cnt[i]);
    }
    cout << ans << "\n";
}