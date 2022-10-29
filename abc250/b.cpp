#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<string> s(n*a, string(n*b, '.'));

    for(int i = 0;i < n * a;i++){
        for(int j = 0;j < n * b;j++){
            int r = i / a;
            int c = j / b;
            if((r + c) % 2 == 1){
                s[i][j] = '#';
            }
        }
    }

    for(int i = 0;i < n * a;i++){
        cout << s[i] <<"\n";
    }    
}