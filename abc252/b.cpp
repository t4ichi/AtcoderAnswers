#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(k);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < k;i++) cin >> b[i];

    int max = *max_element(a.begin(),a.end());
    for(int i = 0;i < n;i++){
        for(int j = 0;j < k;j++){
            if(a[i] == max && (i+1) == b[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    if(solve()){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}