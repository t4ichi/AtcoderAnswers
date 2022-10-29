#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    deque<pair<int,int>> qi;
    
    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if(type == 1){
            int x,c;
            cin >> x >> c;
            qi.push_back({x,c});
        }
        else if(type == 2){
            int c;
            cin >> c;
            long long ans = 0;
            while (c > 0)
            {
                int m = min(c,qi.front().second);
                ans += (long long)m * qi.front().first;
                c -= m;
                qi.front().second -= m;
                if(qi.front().second == 0){
                    qi.pop_front();
                }
            }
            cout << ans << "\n";
            
        }
    }
    
}
