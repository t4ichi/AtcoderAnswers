#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string rs = s;
    reverse(rs.begin(),rs.end());
    if(s == rs){
        cout << "Yes" << "\n";
        return 0;
    }

    int count = 0;
    while (s[count] == 'a')
    {
        count++;
    }
    int rcount = 0;
    while (rs[rcount] == 'a')
    {
        rcount++;
    }

    for (int i = 0; i < rcount-count; i++)
    {
        rs += 'a';
    }
    string ns = rs;
    reverse(ns.begin(),ns.end());

    if(rs == ns){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}
