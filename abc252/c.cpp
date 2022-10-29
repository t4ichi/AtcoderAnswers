#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0;i < n;i++) cin >> s[i];

    int ans = 1001001001;

    for (int i = 0; i < 10; i++){
        char c = i + '0';
        vector<int> a(10);
        for (int j = 0; j < n; j++){
            for (int k = 0; k < 10; k++){
                if(c == s[j][k]){
                    a[k]++;
                }
            }
        }
        int cur = 0;
        for (int j = 0; j < 10; j++){
            int num = j + (10 * (a[j]-1));
            cur = max(cur,num);
        }
        ans = min(ans,cur);
    }
    cout << ans << "\n";
}
