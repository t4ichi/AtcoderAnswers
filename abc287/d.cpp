#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    
    int s_size = s.size();
    int t_size = t.size();

    vector<bool> a(s_size+1),b(s_size+1);
    a[0] = true;
    b[0] = true;
    
    auto isMatch = [&](int i){
        if(s[i] == t[i] || s[i] == '?' || t[i] == '?'){
            return true;
        }
        return false;
    };

    for(int i = 0;i < s_size;i++){
        if(isMatch(i)){
            a[i+1] = true;
        }
        else{
            break;
        }
    }

    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());

    for(int i = 0;i  < s_size;i++){
        if(isMatch(i)){
            b[i+1] = true;
        }
        else{
            break;
        }
    }

    for(int i = 0;i <= t_size;i++){
        if(a[i] && b[t_size-i]){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
}
