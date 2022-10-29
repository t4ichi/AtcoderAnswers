#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> a(k);
    vector<int> x(n) ,y(n);
    for(int i = 0;i < k;i++) cin >> a[i];

    for(int i = 0;i < n;i++){
        cin >> x[i] >> y[i];
    }
    vector<double> r(n);
    for(int i = 0;i < n;i++){
        r[i] = 1e16;
        for(int j = 0;j < k;j++){
            double dx = x[i] - x[a[j]-1];
            double dy = y[i] - y[a[j]-1];
            double dis = sqrt(dx * dx + dy * dy);
            r[i] = min(dis,r[i]);
        }
    }
    double ans = 0;
    for(int i = 0;i < n;i++){
        ans = max(r[i],ans);
    }
    printf("%.10f\n",ans);
}