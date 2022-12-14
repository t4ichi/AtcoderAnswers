#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int idx = k;
    for(int i = 0;i < n;i++,idx++){
        if(idx < n){
            cout << a[idx] << " ";
        }
        else{
            cout << 0 << " ";
        }
    }
    cout << "\n";
}