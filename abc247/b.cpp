#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);
    for(int i = 0;i < n;i++) cin >> s[i] >> t[i];

    bool can = true;
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){        
            if(s[i] == s[j] || s[i] == t[j] || t[i] == s[j] || t[i] == t[j]){
                if(s[i] == t[j])can = false;
                for(int k = i + 1;k < n;k++){
                    if(t[i] == t[k]) can = false;
                }
            }
        }
    }
    cout << (can ? "Yes" : "No") << "\n";
}