#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0;i < n;i++) cin >> x[i] >> y[i];

    double ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            int dx = abs(x[i]-x[j]);
            int dy = abs(y[i]-y[j]);
            ans = max(ans,sqrt(dx*dx+dy*dy));
        }
    }
    printf("%.10f\n",ans);
}