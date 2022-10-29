#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,d;
    cin >> a >> b >> d;

    double nSin = sin(d * M_PI/180);
    double nCos = cos(d * M_PI/180);
    
    double x = nCos * a - nSin * b;
    double y = nSin * a + nCos * b;

    printf("%.10f %.10f\n",x,y);
}