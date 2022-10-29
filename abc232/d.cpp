#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> c(h);
    for(int i = 0;i < h;i++)cin >> c[i];
    vector<vector<int>> a(h+1,vector<int>(w+1));

    for(int i = h-1;i >= 0;i--){
        for(int j = w-1;j >= 0;j--){
            if(c[i][j] ==  '#') continue;
            a[i][j] = max(a[i+1][j],a[i][j+1])+1;
        }
    }

    cout << a[0][0] << "\n";
}
