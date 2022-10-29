#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i = 0;i < n;i++){
        cin >> s[i];
    }

    set<string> t;
    for(int i = 0;i < m;i++){
        string tt = "";
        cin >> tt;
        t.emplace(tt);
    }

    for (int i = 0; i < n; i++){
        auto it = t.find(s[i]);
        
        if(it != t.end()){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
    
}
