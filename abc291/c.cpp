#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    set<pair<int,int>> st;
    st.emplace(0,0);
    int x = 0;
    int y = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == 'R'){
            x++;
        }
        else if(s[i] == 'L'){
            x--;
        }
        else if(s[i] == 'U'){
            y++;
        }
        else if(s[i] == 'D'){
            y--;
        }

        if(st.find({x,y}) != st.end()){
            cout << "Yes" << "\n";
            return 0;
        }
        else{
            st.emplace(x,y);
        }
    }
    cout << "No" << "\n";
}
