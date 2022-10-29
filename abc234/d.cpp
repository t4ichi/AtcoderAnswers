#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i = 0;i < n;i++)cin >> p[i];
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i = 0;i < k;i++)q.push(p[i]);

    cout << q.top() << "\n";
    for(int i = k;i < n;i++){
        q.push(p[i]);
        q.pop();
        cout << q.top() << "\n";
    }
}