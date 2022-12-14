#include<bits/stdc++.h>
using namespace std;
int ans = 0;

void func(int v,map<int,vector<int>> &g,map<int,bool> &seen){
    seen[v] = true; 
    ans = max(ans,v);
    for(auto v2 : g[v]){
        if(seen[v2]){
            continue;
        }
        func(v2,g,seen);
    }
}

int main(){
    int n;
    cin >> n;
    map<int,vector<int>> g;
    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    map<int,bool> seen;
    func(1,g,seen);
    cout << ans << "\n";
}
