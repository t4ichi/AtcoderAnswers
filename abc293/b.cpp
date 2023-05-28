#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    vector<bool> x(n+1,false);
    for(int i = 0;i < n;i++){
        if(x[i+1] == false){
            x[a[i]] = true;
        }
    }

    vector<int> ans; 
    for(int i = 1;i <= n;i++){
        if(!x[i]){
            ans.push_back(i);
        }
    }
    cout << ans.size() << "\n";
    for(auto i : ans){
        cout << i << " ";
    }
    cout << "\n";
}
