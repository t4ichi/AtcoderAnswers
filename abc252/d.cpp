#include <bits/stdc++.h>
using namespace std;

long long sum(long long n){
    return (1+n)*n/2;
}
long long f(long long n,long long a){
    return sum(n/a)*a;
}

int main(){
    long long n,a,b;
    cin >> n >> a >> b;
    long long ans = sum(n);
    ans -= f(n,a);
    ans -= f(n,b);
    ans += f(n,lcm(a,b));
    cout << ans << "\n";
}