#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    map<int,vector<int>> a;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        a[x].push_back(i+1);
    }

    for(int i = 0;i < q;i++){
        int x,k;
        cin >> x >> k;
        if((int)a[x].size() >= k){
            cout << a[x][k-1] << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
}
