#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x,a,d,n;
    cin >> x >> a >> d >> n;

    if(d == 0){
        cout << abs(x - a) << "\n";
        return 0;
    }
    if(d < 0){
        a = a + d * (n - 1);
        d = -d;
    }
    if(x <= a){
        cout << a - x << "\n";
        return 0;
    }

    long long i = (x - a) / d;
    if(i > n - 1){
        i = n - 1;
    }
    if(i < 0){
        i = 0;
    }
    long long ans = abs((a + d * i) - x);

    if(i < n-1){
        ans = min(ans,abs((a + d * (i + 1)) - x));
    }
    cout << ans << endl;
    return 0;
}