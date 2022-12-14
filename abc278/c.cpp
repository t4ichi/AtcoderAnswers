#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    map<int,set<int>> mp;
    while(q > 0){
        q--;
        int t,a,b;
        cin >> t >> a >> b;
        if(t == 1){
            mp[a].insert(b);
        }
        else if(t == 2){
            auto it = mp[a].find(b);
            if (it != mp[a].end()){
                mp[a].erase(it);
            }
        }
        else{
            auto it1 = mp[a].find(b);
            auto it2 = mp[b].find(a);
            if (it1 != mp[a].end() && it2 != mp[b].end()){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        }
    }

}
