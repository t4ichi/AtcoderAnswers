#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x,p;
    cin >> n;
    vector<int> a;

    p = 0;
    for(int i = 0;i < n; i++){
        cin >> x;
        a.push_back(0);

        for(int j = 0;j < a.size();j++){
            a[j] += x;
        }
    }
    for(int i = 0;i < a.size();i++){
        if(a[i] >= 4){
            p++;
        }
    }
    cout << p << "\n";
}