#include<bits/stdc++.h>
using namespace std;

bool isvalid(int x, int y, int H, int W) {
    if(0 <= x && x < H && 0 <= y && y < W) {return true;}
    else {return false;}
}

int getnum(int x, int y, int H, int W) {
    return (x * W + y);
}

void dfs(int v, vector<vector<int>> &G, vector<bool> &seen) {
    seen[v] = true;
    for(auto v2 : G[v]) {
        if(seen[v2]) {continue;}
        dfs(v2, G, seen);
    }
    return;
}

int main(){
    int n;
    cin >> n;

    const int MAX = 2010;
    int dx[6] = {-1,-1,0,0,1,1};
    int dy[6] = {-1,0,-1,1,0,1};

    vector<vector<int>> grid(MAX,vector<int>(MAX,0));
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        x += MAX / 2;
        y += MAX / 2;
        grid[x][y] = 1;
    }

    vector<vector<int>> G(MAX * MAX);
    for(int x = 0; x < MAX; ++x) {
        for(int y = 0; y < MAX; ++y) {
            if(grid[x][y] == 0) {continue;}

            int v = getnum(x, y, MAX, MAX);
            for(int d = 0; d < 6; ++d) {
                int nx = x + dx[d], ny = y + dy[d];
                if(isvalid(nx, ny, MAX, MAX)) {
                    if(grid[nx][ny] == 0) {continue;}
                    int nv = getnum(nx, ny, MAX, MAX);
                    G[v].push_back(nv);
                }
            }
        }
    }
    vector<bool> seen(MAX * MAX, false);
    int ans = 0;
    for(int x = 0; x < MAX; ++x) {
        for(int y = 0; y < MAX; ++y) {
            if(grid[x][y] == 0) {continue;}
            int v = getnum(x, y, MAX, MAX);
            if(seen[v]) {continue;}
            dfs(v, G, seen);
            ans++;
        }
    }
    cout << ans << "\n";
}
