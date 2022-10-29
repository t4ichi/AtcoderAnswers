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

    long long i = 0;
    long long j = n-1;
    
    while(j - i > 1){
        long long mid = i + (j - i) / 2;
        if(a + (d * mid) >= x){
            j = mid;
        }
        else{
            i = mid;
        }
    }
    long long ans = abs((a + d * i) - x);

    if(i < n-1){
        ans = min(ans,abs((a + d * (i + 1)) - x));
    }
    cout << ans << endl;
    // cout << i << "\n";
    return 0;
}