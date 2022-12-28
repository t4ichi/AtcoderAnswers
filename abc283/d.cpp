#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> st;
    stack<set<char>> stc;

    for(int i = 0;i < s.size();i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(st.find(s[i]) != st.end()){
                cout << "No" << "\n";
                return 0;
            }
            st.insert(s[i]);
            if(!stc.empty()){
                stc.top().insert(s[i]);
            }
            
        }
        else if(s[i] == '('){
            stc.emplace(set<char>());
        }
        else if(s[i] == ')'){
            for(char c : stc.top()){
                st.erase(c);
            }
            stc.pop();
        }
    }
    cout << "Yes" << "\n";
}
