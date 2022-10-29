#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> ar = {a,b,c};
    sort(ar.begin(),ar.end());
    cout << (ar[1] == b ? "Yes":"No") << "\n";
}