#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int cur = 0;
    int ans = 0;
    string s;

    cin >> n >> s;

    vector<pair<int,char>> ws;
    for(int i = 0;i < n;i++){
        int tmp;
        cin >> tmp;
        ws.push_back({tmp,s[i]});
        if(s[i] == '1') cur++;
    }

    sort(ws.begin(),ws.end());
    ans = cur;
    for(int i = 0;i < n;i++){
        if(ws[i].second == '1'){
            cur--;
        }
        else{
            cur++;
        }

        if(i < (n-1)){
            if(ws[i].first != ws[i+1].first){
                ans = max(ans,cur);
            }
        }
        else{
            ans = max(ans,cur);
        }
    }
    cout << ans << "\n";
}