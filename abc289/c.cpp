#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<set<int>> st(m);
    for(int i = 0;i < m;i++){
        int c;
        cin >> c;
        for(int j = 0;j < c;j++){
            int a;
            cin >> a;
            a--;
            st[i].insert(a);
        }
    }
    int ans = 0;
    set<int> s;
    for(int i = 0;i < n;i++){
        s.insert(i);
    }

    for(int bit = 0;bit < (1<<m);bit++){
        set<int> ns;
        for(int i = 0;i < m;i++){
            if(bit & (1<<i)){
                for(auto j : st[i]){
                    ns.insert(j);
                }
            }
        }
        bool isok = true;
        for(int i = 0;i < n;i++){
            if(ns.find(i) == ns.end()){
                isok = false;
                break;
            }
        }
        if(isok)
            ans++;
    }
    cout << ans << "\n";
}
