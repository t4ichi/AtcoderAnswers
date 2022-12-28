#include<bits/stdc++.h>
using namespace std;

int main(){
    int H,W,N,h,w;
    cin >> H >> W >> N >> h >> w;
    vector a(H,vector<int>(W));
    for(int i = 0;i < H;i++){
        for(int j = 0;j < W;j++){
            cin >> a[i][j];
        }
    }

    int k = H - h + 1;
    int l = W - w + 1;
    vector ans(k+1,vector<int>(l+1));

    for(int r = 0;r < k;r++){
        vector<int> cnt(N+1);
        //全面の種類数を求める
        for(int i = 0;i < H;i++){
            for(int j = 0;j < W;j++){
                int x = a[i][j];
                cnt[x]++;
            }
        }
        //最初に塗りつぶされた部分を削除
        for(int i = r;i < h+r;i++){
            for(int j = 0;j < w;j++){
                int x = a[i][j];
                cnt[x]--;
            }
        }

        int cur = 0;
        for(int i : cnt){
            if(i > 0){
                cur++;
            }
        }
        ans[r][0] = cur;
        //追加、削除して順次種類数を求める
        for(int j = 0;j < l;j++){
            for(int i = r;i < h+r;i++){
                int del = a[i][j+w];
                cnt[del]--;
                if(cnt[del] == 0) cur--;

                int add = a[i][j];
                if(cnt[add] == 0) cur++;
                cnt[add]++;
            }
            ans[r][j+1] = cur;
        }
    }
    for(int i = 0;i < k;i++){
        for(int j = 0;j < l;j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }   
}
