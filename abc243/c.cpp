#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n) ,y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    string s;
    cin >> s;

    map<int,vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[y[i]].emplace_back(i);
    }
    
    for(auto m : mp){
        vector<pair<int,char>> idx;
        for(int i = 0;i < m.second.size();i++){
            idx.emplace_back(x[m.second[i]],s[m.second[i]]);
        }
        sort(idx.begin(),idx.end());
        for (int i = 0; i < idx.size()-1; i++)
        {
            if(idx[i].second == 'R' && idx[i+1].second == 'L'){
                cout << "Yes" << "\n";
                return 0;
            }
        }
        
    }
    cout << "No" << "\n";
}
