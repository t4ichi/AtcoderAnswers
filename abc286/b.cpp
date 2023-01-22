#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    queue<char> que;

    for(int i = 0;i < s.size();i++){
        que.push(s[i]);
    }

    string ans = "";
    while (!que.empty()){
        char c = que.front();
        que.pop();
        if(que.empty()){
            ans += c;
            break;
        }

        char nc = que.front();
        if(c == 'n' && nc == 'a'){
            ans += "nya";
            que.pop();
        }
        else{
            ans += c;
        }
    }
    cout << ans << "\n";
}