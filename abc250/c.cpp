#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> ball(n);
    vector<int> pos(n);

    for(int i = 0; i < n; i++){
        ball[i] = i;
        pos[i] = i;
    }
    for(int i = 0;i < q;i++){
        int x;
        cin >> x;
        x--;
        int cur =  pos[x];
        int to = cur + 1;
        if(to == n) to = cur - 1;

        swap(ball[cur],ball[to]);
        swap(pos[ball[cur]],pos[ball[to]]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ball[i] + 1 << " ";
    }
    cout << "\n";
}
