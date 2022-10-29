#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;

    int p = 0;
    for(int i = 0;i < q;i++){
        int t,x;
        cin >> t >> x;
        if(t == 1){
            p = (p + n - x) % n;
        }
        else{
            cout << s[(p + x - 1) % n] << "\n";
        }
    }
}