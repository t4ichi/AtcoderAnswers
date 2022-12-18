#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;

    for(int i = 0;i < n;i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    vector<int> ans;
    for(auto i : mp){
        ans.push_back(i.second);
    }
    reverse(ans.begin(),ans.end());

    for(int i = 0;i < n;i++){
        if(ans.size() > i){
            cout << ans[i] << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
}
