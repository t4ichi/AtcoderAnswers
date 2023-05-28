#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0;i < (int)s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << i + 1 << "\n";
            return 0;
        }
    }
}
