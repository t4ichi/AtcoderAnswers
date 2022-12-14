#include<bits/stdc++.h>
using namespace std;

bool f(int h,int m){
    int h1 = h / 10;
    int h2 = h % 10;
    int m1 = m / 10;
    int m2 = m % 10;

    swap(h2,m1);
    int nh = h1 * 10 + h2;
    int nm = m1 * 10 + m2;
    return (nh < 24 && nm < 60);
}

int main(){
    int h,m;
    cin >> h >> m;
    while(1){
        if(f(h,m)){
            cout << h << " " << m << "\n";
            return 0;
        }
        else{
            m += 1;
            if(m >= 60){
                h += 1;
                m = 0;
            }
            if(h >= 24){
                h = 0;
                m = 0;
            }
        }
    }
}