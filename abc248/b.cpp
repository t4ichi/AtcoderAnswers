#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,k;
    cin >> a >> b >> k;
    
    int x = 0;
    while(a < b){
        a *= k;
        x++;
    }
    cout << x << "\n";
}