#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector ga(n,vector<bool>(n));
    vector gb(n,vector<bool>(n));
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        ga[a][b] = ga[b][a] = true;
    }
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        gb[a][b] = gb[b][a] = true;
    }
    
    vector<int>p(n);
    for(int i = 0;i < n;i++) p[i] = i;
    do{
        vector g(n,vector<bool>(n));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                g[i][j] = gb[p[i]][p[j]];
            }
        }
        if(ga == g){
            cout << "Yes" << "\n";
            return 0;
        }
    }
    while (next_permutation(p.begin(),p.end()));
    cout << "No" << "\n";
}
