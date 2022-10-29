#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,q;
    cin >> n >> q;
    vector<long long> a(n),x(q);
    for(int i = 0;i < n;i++) cin >> a[i];
    // for(int i = 0;i < q;i++) cin >> x[i];

    sort(a.begin(),a.end());

    // long long sum = accumulate(a.begin(),a.end(),0);
    
    for (int i = 0; i < q; i++)
    {
        long long x;
        cin >> x;

        long long l = 0;
        long long r = n-1;
        while (r - l > 1)
        {
            long long mid = l + (r - l) / 2;
            if(a[mid] >= x){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        cout  << "l:" << l << " r:" << r << "\n";
        int st=0,fi=n-1;
        while(st<=fi){
            int te=(st+fi)/2;
            if(a[te]<x){
                st=te+1;
            }
            else{
                fi=te-1;
            }
        }
        cout  << "st:" << st << " fi:" << fi << "\n";

        long long row_sum = accumulate(a.begin(),a.begin() + l + 1,0);
        // cout << "row_sum :" << row_sum << "\n";
        long long high_sum = accumulate(a.begin() + (n - 1) - r,a.end(),0);
        // cout << "high_sum :" << high_sum << "\n";

        long long ans = x * l - row_sum + x * (r + 1) - high_sum;

        // cout << ans << "\n";
    }
    
}