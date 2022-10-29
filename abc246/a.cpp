#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[3];
    int y[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }

    int ax = 0;
    int ay = 0;
    if(x[0] == x[1]) ax = x[2];
    if(x[1] == x[2]) ax = x[0];
    if(x[2] == x[0]) ax = x[1];

    if(y[0] == y[1]) ay = y[2];
    if(y[1] == y[2]) ay = y[0];
    if(y[2] == y[0]) ay = y[1];

    cout << ax << " " << ay << "\n";
}