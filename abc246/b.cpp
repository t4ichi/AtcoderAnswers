#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    double r = sqrt(a*a + b*b);
    printf("%.10f %.10f\n",a/r,b/r);
}