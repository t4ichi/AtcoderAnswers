#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
     cin >> n;
     vector<string> s(n);
     vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> t[i];
    }
    
    vector<bool> orig(n);
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        if(st.find(s[i]) == st.end()){
            orig[i] = true;
        }
        st.insert(s[i]);
    }
    int ans = 0;
    int ctr = -1;
    for (int i = 0; i < n; i++)
    {
        if(orig[i] == false) continue;
        if(ctr < t[i]){
            ctr = t[i];
            ans = i + 1;
        }
    }
    cout << ans << "\n";
}
