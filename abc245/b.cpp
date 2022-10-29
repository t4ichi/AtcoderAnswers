#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    vector<bool> can(2001,false);
    for(int i = 0;i < n;i++){
        can[a[i]] = true;
    }
    int ans = 0;

    for(int i = 0;i < 2001;i++){
        if(can[i] == false){
            ans = i;
            break;
        }
    }
    cout << ans << "\n";
}