#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = (int)s.size()-1;i >= 0;i--){
        if(s[i] == 'a'){
            cout << i+1 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}