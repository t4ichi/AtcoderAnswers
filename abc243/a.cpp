#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,a,b,c;
    cin >> v >> a >> b >> c;

    int now = 0;
    while (v >= 0)
    {
        if(now == 0){
            v -= a;
            if(v < 0){
                cout << "F" << "\n";
                return 0;
            }
        }
        else if(now == 1){
            v -= b;
            if(v < 0){
                cout << "M" << "\n";
                return 0;
            }
        }
        else if(now == 2){
            v -= c;
            if(v < 0){
                cout << "T" << "\n";
                return 0;
            }
        }
        now = (now+1)%3;
    }
    
}