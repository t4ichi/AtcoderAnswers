#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    long long q = 0;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        q += a[i]/x;
        b[i] = a[i]%x;
    }
    if(q >= k){
        sum -= (long long)k * x;
    }
    else{
        sort(b.rbegin(),b.rend());
        sum -= q*x;
        k -= q;
        k = min(k,n);
        for (int i = 0; i < k; i++)
        {
            sum -= b[i];
        }
    }
    cout << sum << "\n";
}