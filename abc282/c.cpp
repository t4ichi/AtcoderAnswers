#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";
    bool isCHENGE = true;

    for(int i = 0;i < n;i++){
        char c = s[i];
        if(c == '"'){
            isCHENGE = !isCHENGE;
            ans += '"';
        }
        else if(c == ','){
            if(isCHENGE){
                ans += '.';
            }
            else{
                ans += ',';
            }
        }
        else{
            ans += c;
        }
    }
    cout << ans << "\n";
}
