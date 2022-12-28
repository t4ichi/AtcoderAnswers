#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 1){
            int k,x;
            cin >> k >> x;
            a[k-1] = x;
        }
        else if(type == 2){
            int k;
            cin >> k;
            cout << a[k-1] << "\n";
        }
    }
}