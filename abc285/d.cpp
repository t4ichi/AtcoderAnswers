#include <bits/stdc++.h>
using namespace std;

bool dfs(string v,map<string,string>& mp,map<string,bool>& seen,map<string,bool>& finished){
    bool ret = true;
    seen[v] = true;
    string v2 = mp[v];
    if(seen[v2]){
        if(!finished[v2]){
            return false;
        }
    }

    ret &= dfs(v2,mp,seen,finished);
    finished[v] = true;
    return ret;
}

int main() {
    int n;
    cin >> n;
    map<string,string> mp;

    for (int i = 0; i < n; i++) {
        string s, t;
        cin >> s >> t;
        mp[s] = t;
    }

    map<string,bool> seen;
    map<string,bool> finised;

    // if(dfs)
    // cout << "Yes" << endl;
}
