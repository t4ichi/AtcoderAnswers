#include<bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;

    vector<P> a;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {   
        int x;
        cin >> x;
        if(a.empty() || a.back().first != x){
            a.emplace_back(x,1);
        }
        else{
            a.back().second++;
        }

        if(a.back().second < a.back().first){
            ans++;
        }
        else{
            ans -= a.back().first-1;
            a.pop_back();
        }
        cout << ans << "\n";
    }
}
