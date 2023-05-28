#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    string ans = "";
    for(int i = 0;i < n;i++){
        if(cnt >= k){
            ans += 'x';
        }
        else if(s[i] == 'o'){
            cnt++;
            ans += 'o';
        }
        else{
            ans += 'x';
        }
    }
    cout << ans << "\n";
}
