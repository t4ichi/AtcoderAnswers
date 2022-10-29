#include <bits/stdc++.h>
using namespace std;

vector<pair<char,int>> Do(string s){
    vector<pair<char,int>> re;
    for(char c : s){
        if(re.size() > 0 && re.back().first == c){
            re.back().second++;
        }
        else{
            re.push_back({c,1});
        }
    }
    return re;
}


int main() {
    string s,t;
    cin >> s >> t;

    vector<pair<char,int>> a = Do(s);
    vector<pair<char,int>> b = Do(t);

    if(a.size() != b.size()){
        cout << "No" << "\n";
        return 0;
    }

    for (int i = 0; i < (int)a.size(); i++)
    {
        if(a[i].first != b[i].first){
        cout << "No" << "\n";
            return 0;
        }
        if(a[i].second > b[i].second){
            cout << "No" << "\n";
            return 0;
        }
        if(a[i].second == 1 && b[i].second > 1){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
}