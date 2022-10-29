#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    for(int i = 0;i < 26;i++){
        if(s == t){
            cout << "Yes" << "\n";
            return 0;
        }
        else{
            for(int j = 0;j < (int)s.size();j++){
                s[j] = ((s[j] - 'a') + 1)%26 + 'a';
            }
        }
    }
    cout << "No" << "\n";
}