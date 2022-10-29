#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n+2);
    for(int i = 0;i < n-1;i++){
        cin >> p[i+2];
    }
    int ans = 0;
    int cur = n;
    while(cur != 0){
        ans++;
        cur = p[cur];
    }
    cout << ans-1 << "\n";
}