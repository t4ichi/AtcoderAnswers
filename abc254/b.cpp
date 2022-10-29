#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n+1][n+1];

    rep(i,n+1)rep(j,n+1){
        a[i][j] = 0;
    }

    string s;
    rep(i,n+1){
        rep(j,i){
            if(j == 0|| j == i){
                a[i][j] = 1;
            }
            else{
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
            s += to_string(a[i][j]) + " ";
        }
        s += "\n";
    }

    cout << s <<endl;
}