#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++)cin >> a[i];
    vector<int> b(m);
    for(int i = 0;i < m;i++)cin >> b[i];
    vector<bool> used(m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(used[j])continue;
            if(a[i] == b[j]){
                used[j] = true;
                break;
            }
        }
    }
    int c = 0;
    for (int i = 0; i < m; i++)
    {
        if(used[i]) c++;
    }
    if(c >= m){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }

}