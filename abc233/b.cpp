#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    string s;
    cin >> l >>r >> s;
    string a,b,c;

    for(int i = 0;i < (int)s.size();i++){
        if(i < l-1){
            a += s[i];
        }
        else if(i > r-1){
            c += s[i];
        }
        else{
            b += s[i];
        }
    }
    reverse(b.begin(),b.end());
    cout << a+b+c << "\n";
}