#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<int>> a(2,vector<int>(n));
    vector<vector<bool>> can(2,vector<bool>(n));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        
    }
    can[0][0] = can[1][0] = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int nj = 0; nj < 2; nj++)
            {
                if(can[nj][i-1] == false) continue;
                if(abs(a[nj][i-1] - a[j][i]) <= k){
                    can[j][i] = true;
                }
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        if(can[i][n-1] == true){
            cout << "Yes" << "\n";
            return 0;
        }
    }
    cout << "No" << "\n";
}
