#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0;i < h;i++) cin >> s[i];

    vector<int> xy;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(s[i][j] == 'o'){
                xy.push_back(j);
                xy.push_back(i);
            }
        }
    }
    int ans = abs(xy[0] - xy[2]) + abs(xy[1] - xy[3]);
    cout << ans << "\n";
}