#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 1;i < n;i++){
        int ans = 0;
        for(int j = 0;j+i< n;j++){
            if(s[j] != s[i+j]){
                ans++;
            }
            else{
                break;
            }
        }
        cout << ans << "\n";
    }
}