#include<bits/stdc++.h>
using namespace std;

int main(){
    double h;
    cin >> h;
    double ans = 0;
    ans = sqrt(h * (12800000 + h));
    printf("%.6f \n",ans);
}