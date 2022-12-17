#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<bool>> cnt(n,vector<bool>(n,false));

    for(int i = 0;i < m;i++){
        int k;
        cin >> k;
        vector<int> a(k);
        for(int j = 0;j < k;j++){
            cin >> a[j];
            a[j]--;
        }
        for(int j = 0;j < k;j++){
            for(int l = 0;l < k;l++){
                if(j == l) continue;
                cnt[a[j]][a[l]] = true;
            }
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i == j) continue;
            if(cnt[i][j] == false){
                cout << "No" << "\n";
                return 0;
            }
        }
    }
    cout << "Yes" << "\n";
}