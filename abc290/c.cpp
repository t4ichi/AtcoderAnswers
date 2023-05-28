#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    set<int> st;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    for(int i = 0;i < k;i++){
        if(!st.count(i)){
            cout << i << "\n";
            return 0;
        }
    }
    cout << k << "\n";
}