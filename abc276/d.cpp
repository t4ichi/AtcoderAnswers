#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int g = 0;
    for(int i = 0;i < n;i++){
        g = gcd(g,a[i]);
    }
    
    int ans = 0;
    for(int i = 0;i < n;i++){
        a[i] /= g;
        while(a[i]%2 == 0){
            a[i] /= 2;
            ans++;
        }
        while(a[i]%3 == 0){
            a[i] /= 3;
            ans++;
        }
        if(a[i] != 1){
            cout << -1 << "\n";
            return 0;
        }        
    }
    cout << ans << "\n";
}
