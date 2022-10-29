#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    string ans = "correct";
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(j == i){
                if(a[j][i] != '-' || a[i][j] != '-'){
                    ans = "incorrect";
                }
            }
            else{
                if(a[j][i] == 'L' && a[i][j] != 'W'){
                    ans = "incorrect";
                }
                else if(a[j][i] == 'W' && a[i][j] != 'L'){
                    ans = "incorrect";
                }
                else if(a[j][i] == 'D' && a[i][j] != 'D'){
                    ans = "incorrect";
                }
                else{
                }
            }
        }
    }
    cout << ans << "\n";
}