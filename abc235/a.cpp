#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a,b,c = 0;

    a = s[0] -'0';
    b = s[1] -'0';
    c = s[2] -'0';
    
    int sum = 0;
    sum += a*100 + b*10 + c;
    sum += b*100 + c*10 + a;
    sum += c*100 + a*10 + b;
    cout << sum << "\n";
}