#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a,b;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        if(x % 2 == 0){
            a.emplace_back(x);
        }
        else{
            b.emplace_back(x);
        }
    }

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    int ans = -1;

    if(a.size() > 1){
        ans = max(ans,a[0]+a[1]);
    }
    if(b.size() > 1){
        ans = max(ans,b[0]+b[1]);
    }
    cout << ans << "\n";
}
