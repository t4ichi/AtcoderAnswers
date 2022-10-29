#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x; 
    if(x < 0 && x%10 != 0){
        x = x/10 - 1;
    }
    else{
        x  = x/10;
    }
     
    cout << x << "\n";
}