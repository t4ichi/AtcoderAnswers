#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    map<int,ll> mp;
    for(int i = 0;i < n;i++){
        cin >> mp[i];
    }
    int q;
    cin >> q;
    int b = 0;

    while(q > 0){
        q--;
        int t;
        cin >> t;
        if(t == 1){
            int x;
            cin >> x;
            b = x;
            mp.clear();
        }
        else if(t == 2){
            int i,x;
            cin >> i >> x;
            mp[i-1] += x;
        }
        else{
            int i;
            cin >> i;
            cout << (ll)mp[i-1]+b << "\n";
        }
    }
}
