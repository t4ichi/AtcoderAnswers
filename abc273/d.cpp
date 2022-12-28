#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w,rs,cs;
    cin >> h >> w >> rs >> cs;
    int n;
    cin >> n;

    map<int,vector<int>> mpRL,mpUD;
    for(int i = 0;i < n;i++){
        int r,c;
        cin >> r >> c;
        mpRL[r].push_back(c);
        mpUD[c].push_back(r);
    }
    for(auto &mp : mpRL){
        sort(mp.second.begin(),mp.second.end());
    }
    for(auto &mp : mpUD){
        sort(mp.second.begin(),mp.second.end());
    }
    int q;
    cin >> q;
    while(q > 0){
        q--;
        char d;
        int l;
        cin >> d >> l;
        if(d == 'R'){
            auto it = mpRL.find(rs);
            int wall = w + 1;
            if(it != mpRL.end()){
                auto it2 = upper_bound(it->second.begin(),it->second.end(),cs);
                //壁に当たった場合
                if(it2 != it->second.end()){
                    wall = *it2;
                }
            }
            cs = min(cs+l,wall-1);
        }
        if(d == 'D'){
            auto it = mpUD.find(cs);
            int wall = h+1;
            if(it != mpUD.end()){
                auto it2 = upper_bound(it->second.begin(),it->second.end(),rs);
                //壁に当たった場合
                if(it2 != it->second.end()){
                    wall = *it2;
                }
            }
            rs = min(rs+l,wall-1);
        }
        if(d == 'L'){
            auto it = mpRL.find(rs);
            int wall = 0;
            if(it != mpRL.end()){
                auto it2 = lower_bound(it->second.begin(),it->second.end(),cs);
                //壁に当たった場合
                if(it2 != it->second.begin()){
                    it2--;
                    wall = *it2;
                }
            }
            cs = max(cs-l,wall+1);
        }
        if(d == 'U'){
            auto it = mpUD.find(cs);
            int wall = 0;
            if(it != mpUD.end()){
                auto it2 = lower_bound(it->second.begin(),it->second.end(),rs);
                //壁に当たった場合
                if(it2 != it->second.begin()){
                    it2--;
                    wall = *it2;
                }
            }
            rs = max(rs-l,wall+1);
        }
        cout << rs << " " << cs << "\n";
    }
}