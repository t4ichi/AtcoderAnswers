#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin >> y;
    if(y%4 == 0){
        cout << y+2 << "\n";
    }
    else if(y%4 == 1){
        cout << y+1 << "\n";
    }
    else if(y%4 == 2){
        cout << y << "\n";
    }
    else{
        cout << y+3 << "\n";
    }
}