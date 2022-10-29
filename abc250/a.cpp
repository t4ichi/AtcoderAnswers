#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    int r,c;
    cin >> r >> c;

    int ans = 4;
    if(r - 1 < 1) ans--;
    if(r + 1 > h) ans--;
    if(c - 1 < 1) ans--;
    if(c + 1 > w) ans--;
    cout << ans << "\n";
}