#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x,a,d,n;
    cin >> x >> a >> d >> n;
    vector<long> s(n);
    if(d == 0){
        cout << abs(x - a) << endl;
    }

    for(int i = 0; i < n;i++){
        s[i] = a + (d * i);
    }
    // int ans = 0;
    long long near = s[0];
    for(int i = 1;i < n;i++){
        if(abs(x - near) > abs(x - s[i])){
            near = s[i];
        }
    }

    // while(true){
    //     if(x == near)break;
    //     else if(x > near){
    //         int dx = abs(x - near);
    //         x -= dx;
    //         ans += x;
    //     }
    //     else if(x < near){
    //         int dx = abs(x - near);
    //         x += dx;
    //         ans += x;
    //     }


    // }
    cout << near << "\n";
}