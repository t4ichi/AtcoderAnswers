#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int taka = ((a % 24)*100) + (b % 60) ;
    int aoki = ((c % 24)*100) + (d % 60) + 1;

    if(taka < aoki){
        cout << "Takahashi" << "\n";
    }
    else{
        cout << "Aoki" << "\n";
    }
}