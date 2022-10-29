#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,ll,rr;
    cin >> l >> r >> ll >> rr;
    vector<int> a(105);
    for(int i = l;i < r;i++){
        a[i]++;
    }
    for(int i = ll;i < rr;i++){
        a[i]++;
    }
    int ans = 0;
    for (int i = 0; i < 105; i++)
    {
        if(a[i] == 2)ans++;
    }
    cout << ans << "\n";
}