#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<string> s(n);
    for(int i = 0;i < n;i++){
        cin >> s[i];
    }
    vector<string> ns(k);
    for(int i = 0;i < k;i++){
        ns[i] = s[i];
    }
    sort(ns.begin(),ns.end());
    for(int i = 0;i < k;i++){
        cout << ns[i] << "\n";
    }
}