#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> c(h);
    for(int i = 0;i < h;i++){
        cin >> c[i];
    }

    for(int i = 0;i < w;i++){
        int cnt = 0;
        for(int j = 0;j < h;j++){
            if(c[j][i] == '#'){
                cnt++;
            }
        }
        cout << cnt << " ";
    }
    cout << "\n";
}