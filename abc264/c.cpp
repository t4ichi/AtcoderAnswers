#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1,w1;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1,vector<int>(w1));
    for(int i = 0;i < h1;i++){
        for(int j = 0;j < w1;j++){
            cin >> a[i][j];
        }
    }
    int h2,w2;
    cin >> h2 >> w2;
    vector<vector<int>> b(h2,vector<int>(w2));
    for(int i = 0;i < h2;i++){
        for(int j = 0;j < w2;j++){
            cin >> b[i][j];
        }
    }

    for(int bit_h = 0;bit_h < (1<<h1);bit_h++){
        for(int bit_w = 0;bit_w <(1<<w1);bit_w++){
            vector<int> hi,wi;
            for(int i = 0;i < h1;i++){
                if(bit_h & (1<<i)){
                    hi.push_back(i);
                }
            }
            for(int i = 0;i < w1;i++){
                if(bit_w & (1<<i)){
                    wi.push_back(i);
                }
            }
            if(hi.size() != h2) continue;
            if(wi.size() != w2) continue;
            vector<vector<int>> c(h2,vector<int>(w2));
            for(int i = 0;i < h2;i++){
                for(int j = 0;j < w2;j++){
                    c[i][j] = a[hi[i]][wi[j]];
                }
            }
            if(b == c){
                cout << "Yes" << "\n";
                return 0;
            }
        }
    }
    cout << "No" << "\n";
}
