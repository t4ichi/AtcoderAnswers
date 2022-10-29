#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int ans = 0;
    for (int i = 0; i < (1<<n); i++)
    {
        map<char,int> cnt;
        for (int j = 0; j < n; j++)
        {
            if(i & (1<<j)){
                for(char c : s[j]){
                    cnt[c]++;
                }
            }
            int now = 0;
            for(auto p :cnt){
                if(p.second == k)now++;
            }
            ans = max(ans,now);
        }
    }
    cout << ans << "\n";
}
