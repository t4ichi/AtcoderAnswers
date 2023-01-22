#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q,r,s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    p--;q--;r--;s--;
    

    for(int i = 0;i < q-p+1;i++){
        swap(a[i+p],a[i+r]);
    }

    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}