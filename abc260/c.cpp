#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    vector<long long> r(n+1),b(n+1);
    
    r[n] = 1;
    for (int i = n; i > 1; i--)
    {
        b[i] += r[i] * x;
        r[i-1] += r[i];

        r[i-1] += b[i];
        b[i-1] += b[i] * y;
    }
    cout << b[1] << "\n";
}
