#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    int hit = 0;
    int blow = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] == b[j] && i == j){
                hit++;
            }
            else if(a[i] == b[j]){
                blow++;
            }
        }
    }
    cout << hit << "\n";
    cout << blow << "\n";
}