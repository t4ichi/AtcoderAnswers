#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[0] == '1'){
        cout << "No" << "\n";
        return 0;
    }
    vector<vector<int>> column(7);
    column[0].emplace_back(6);
    column[1].emplace_back(3);
    column[2].emplace_back(7);
    column[2].emplace_back(1);
    column[3].emplace_back(4);
    column[3].emplace_back(0);
    column[4].emplace_back(8);
    column[4].emplace_back(2);
    column[5].emplace_back(5);
    column[6].emplace_back(9);

    for(int i = 0;i < 7;i++){
        bool flag1 = false;

        for(int idx : column[i]){
            if(s[idx] == '1'){
                flag1 = true;
            }
        }
        if(!flag1) continue;

        for(int j = i+1;j < 7;j++){
            bool flag2 = false;
            for(int idx : column[j]){
                if(s[idx] == '1'){
                    flag2 = true;
                }
            }
            if(flag2) continue;
            for(int k = j+1;k < 7;k++){
                bool flag3 = false;
                for(int idx : column[k]){
                    if(s[idx] == '1'){
                        flag3 = true;
                    }
                }
                if(flag3){
                    cout << "Yes" << "\n";
                    return 0;
                }
            }
        }
    
    }
    cout << "No" << "\n";
}