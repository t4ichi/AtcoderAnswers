#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    long long ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){

            for(int di = -1;di <= 1;di++){
                for(int dj = -1;dj <= 1;dj++){
                    if(di != 0 || dj != 0){
                        long long num = 0;

                        int ni = i;
                        int nj = j;
                        for(int k=0;k<n;k++){
                            ni = (n + ni + di) %n;
                            nj = (n + nj + dj) %n;
                            num = num * 10 + (int) a[ni][nj]-'0';
                        }
                        ans = max(ans,num);
                    }
                }
            }
        }
    }
    cout << ans << "\n";
}
