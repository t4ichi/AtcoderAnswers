#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;

    int ans = 0;
    if(x < 0){
        x *= -1;
        y *= -1;
        z *= -1;
    }

    if(y > 0 && y < x){
        if(z < y && z < 0){
            ans += abs(z+z);
        }
        if(z > y){
            cout << -1 << "\n";
            return 0;
        }
    }
    ans += x;
    cout << ans << "\n";
}