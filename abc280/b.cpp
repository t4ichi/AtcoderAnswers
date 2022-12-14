#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    for(int i = 0;i < n;i++){
        if(i == 0){
            cout << a[i] << " ";
        }
        else{
            cout << a[i] - a[i-1] << " "; 
        }        
    }
    cout << "\n";
}