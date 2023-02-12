#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    int x;
    cin >> x;

    vector<bool> isok(x+5,true);
    for(int i : b){
        isok[i] = false;
    }

    vector<bool> dp(x+5,false);

    dp[0] = true;
    for(int i = 0;i <= x;i++){
        for(int j = 0;j < n;j++){
            if(!dp[i]) continue;
            if(isok[i] && i+a[j] <= x){
                dp[i+a[j]] = true;
            }
        }
    }
    if(dp[x]){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}
