#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b;
    cin >> a >> b;

    while(a > 0 && b > 0){
        int i = a % 10;
        int j = b % 10;
        if(i + j > 9){
            cout <<  "Hard" << "\n";
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    cout << "Easy" << "\n";
}