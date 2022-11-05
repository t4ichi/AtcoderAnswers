#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);

    int ans = 0;
    int max = 0;
    for(int i = 0;i < n;i++){
        cin >> h[i];
        if(h[i] > max){
            ans = i;
            max = h[i];
        }
    }
    cout << ans+1 << "\n";
}