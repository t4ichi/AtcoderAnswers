#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;

    vector<int> a(n),b(n);
    for(int i = 0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    long long answer = 4e18;
    long long sum = 0;

    for(int i = 0;i < n;i++){
        if(x < i + 1) break; 
        sum += a[i] + b[i];
        long long cur = sum + (x - i - 1) * (long long)b[i];
        answer = min(answer,cur);
    }
    cout << answer << "\n";
    return 0;
}