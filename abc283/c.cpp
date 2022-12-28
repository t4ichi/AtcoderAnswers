#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    queue<char> que;
    for(int i = 0;i < s.size();i++){
        que.push(s[i]);
    }
    while(!que.empty()){
        char c = que.front();
        que.pop();
        if(c == '0'){
            if(!que.empty()){
                char nc = que.front();
                if(nc == '0') que.pop();
            }
        }
        ans++;
    }
    cout << ans << "\n";
}
