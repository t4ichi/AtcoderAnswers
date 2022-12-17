#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> s(10);
    int a = 110;
    int b = 0;
    int c = 110;
    int d = 0;

    for(int i = 0;i < 10;i++){
        cin >> s[i];
        for(int j = 0;j < 10;j++){
            if(s[i][j] == '#'){
                a = min(a,i);
                b = max(b,i);
                c = min(c,j);
                d = max(d,j);
            }
        }
    }
    cout << a+1 << " " << b+1 << "\n";
    cout << c+1 << " " << d+1 << "\n";
}