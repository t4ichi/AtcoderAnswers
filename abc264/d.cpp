#include<bits/stdc++.h>
using namespace std;

int main(){
    string t = "atcoder";
    map<char,int> mp;
    int n = (int)t.size();
    for(int i = 0;i < n;i++){
        mp.emplace(t[i],i);
    }

    string s;
    cin >> s;
    vector<int> a;
    for(int i = 0;i < n;i++){
        a.push_back(mp[s[i]]);
    }

    int ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i;j++){
            if(a[j] > a[i]){
                swap(a[i],a[j]);
                ans++;
            }
        }
    }
    cout << ans << "\n";
}