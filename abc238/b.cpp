#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++)cin >> a[i];
    vector<bool> p(360);
    p[0] = true;
    
    int now = 0;
    for (int i = 0; i < n; i++){
        now = (a[i] + now) % 360;
        p[now] = true;
    }

    int counter = 0;
    int max = 0;
    for(int i = 1;i <= 360;i++){
        if(p[i%360]){
            if(counter > max) max = counter;
            counter = 0;
        }
        else {
            counter++;
        }
    }
    cout << max+1 << "\n";
}