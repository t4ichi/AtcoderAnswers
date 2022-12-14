#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h),t(h);

    for(int i = 0;i < h;i++){
        cin >> s[i];
    }
    for(int i = 0;i < h;i++){
        cin >> t[i];
    }

    vector<string> sx(w,string(h,'*')),tx(w,string(h,'*'));
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            sx[j][i] += s[i][j];
            tx[j][i] += t[i][j];
        }
    }
    sort(sx.begin(),sx.end());
    sort(tx.begin(),tx.end());
    if(sx == tx){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}
