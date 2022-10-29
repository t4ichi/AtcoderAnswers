#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string t;
    cin >> t;

    int x,y;
    x = 0;
    y = 0;
    int dis = 1;

    for (int i = 0; i < n; i++)
    {
        char c = t[i];
        if(c == 'S'){
            if(dis == 0) y++;
            else if(dis == 1) x++;
            else if(dis == 2) y--;
            else if(dis == 3) x--;
        }
        else{
            dis = (dis+1)%4;
        }
    }
    cout << x << " " << y << "\n";
}