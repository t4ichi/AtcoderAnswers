#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(2*n+2);
    for(int i = 1;i <= n;i++){
        int a;
        cin >> a;
        p[i*2] = p[i*2+1] = a;
    }
    vector<int> ans(2*n+2);
    for(int i = 2;i <= n*2+1;i++){
        ans[i] = ans[p[i]] + 1;
    }
    for(int i = 1;i <= n*2+1;i++){
        cout << ans[i] << "\n";
    }
}
