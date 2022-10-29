#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> lr(n);
    for (int i = 0; i < n; i++)
    {
        int r,l;
        cin >> l >> r;
        lr[i] = {l,r};
    }
    sort(lr.begin(),lr.end());
    
    vector<int> al,ar;
    for(int i = 0;i < n; i++){
        if(al.empty() || ar.empty() || ar.back() < lr[i].first){
            al.push_back(lr[i].first);
            ar.push_back(lr[i].second);
        }
        else{

            ar.back() = max(ar.back(),lr[i].second);
        }
    }
    for(int i = 0;i < (int)al.size();i++){
        cout << al[i] << " " << ar[i] << "\n";
    }
}