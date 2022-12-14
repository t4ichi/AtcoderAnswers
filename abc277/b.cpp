#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    set<string> st;
    for(int i = 0;i < n;i++){
        cin >> s[i];
        if(st.count(s[i])){
            cout << "No" << "\n";
            return 0;
        }
        st.emplace(s[i]);
    }
    set<char> a = {'H','D','C','S'};
    set<char> b = {'A','2','3','4','5','6','7','8','9',
    'T','J','Q','K'};
    for(int i = 0;i < n;i++){
        if(s[i][0] == s[i][1]){
            cout << "No" << "\n";
            return 0;
        }
        for(int j = 0;j < 4;j++){
            if(!a.count(s[i][0])){
                cout << "No" << "\n";
                return 0;
            }
            if(!b.count(s[i][1])){
                cout << "No" << "\n";
                return 0;
            }
        }
    }
    cout << "Yes" << "\n";
}
