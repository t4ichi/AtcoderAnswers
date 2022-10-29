#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long x = pow(2,31);
    if(n >= -x && n < x){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}