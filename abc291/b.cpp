#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(5*n);
    for(int i = 0;i < 5*n;i++){
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    vector<int> a;
    for(int i = n;i < 5*n-n;i++){
        a.push_back(x[i]);
    }

    double ans = 0;
    for(int i : a){
        ans += i;
    }

    ans /= (double)a.size();
    cout << fixed << setprecision(10) << ans << "\n";
}
