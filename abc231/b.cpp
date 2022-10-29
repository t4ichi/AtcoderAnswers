#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> m;
    string ans = "";
    int max = 0;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        auto it = m.find(s);
        if(it == m.end()){
            m.emplace(s,1);
        }
        else{
            m[s]++;   
        }
        if(m[s] > max){
            max = m[s];
            ans = s;
        }
    }
    cout << ans << "\n";
}