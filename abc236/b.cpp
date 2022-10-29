#include<bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1,0);
    for(int i = 0;i < 4*n-1;i++){
        int x;
        cin >> x;
        a[x]++;
    }

    int ans = 0;
    int min = 1e5;
    for(int i = 1;i <= n;i++){
        if(a[i] < min){
            min = a[i];
            ans = i;
        }
    }
    cout << ans << "\n";
}