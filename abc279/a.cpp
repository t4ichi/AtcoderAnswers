#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == 'v'){
            ans++;
        }
        else if(s[i] == 'w'){
            ans += 2;
        }
    }
    cout << ans << "\n";
}