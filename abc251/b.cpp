#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    vector<bool> can(w+1);

    for(int i = 0;i < n;i++){
        if(a[i] <= w){
            can[a[i]] = true;
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            int s = a[i] + a[j];
            if(s <= w){
                can[s] = true;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for(int j = i + 1;j < n;j++){
            for(int k = j + 1;k < n;k++){
                int s = a[i] + a[j] + a[k];
                if(s <= w){
                    can[s] = true;
                }
            }
        }
    }

    int ans = 0;
    for(int i = 1;i <= w;i++){
        if(can[i]) ans++;
    }
    cout << ans << "\n";
}