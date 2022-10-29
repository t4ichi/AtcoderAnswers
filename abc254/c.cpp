#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0;i < n;i++) cin >> a[i];

    for(int i = 0;i < k;i++){
        vector<int> b;
        for(int j = i;j < n;j += k){
            b.push_back(a[j]);
        }
        sort(b.begin(),b.end());
        for(int j=i;j<n;j+=k){
            a[j] = b[j/k];
        }
    }

    vector<int> tmp = a;
    sort(a.begin(),a.end());
    cout << (a == tmp ? "Yes":"No") << endl;
}
