#include<bits/stdc++.h>
using namespace std;

int main(){
    const int dx[] = {1,1,0,1};
    const int dy[] = {0,1,1,-1};

    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            for (int d = 0; d < 4; d++)
            {
                int counter = 0;
                int nx = j;
                int ny = i;
                for (int k = 0; k < 6; k++)
                {
                    if(nx < 0 || ny < 0 || nx >= n || ny >= n){
                        counter = 1000;
                        break;
                    }
                    if(s[ny][nx] == '.')counter++;

                    nx += dx[d];
                    ny += dy[d];
                }
                if(counter <= 2){
                    cout << "Yes" << "\n";
                    return 0;
                }
            }            
        }
        
    }
    cout << "No" << "\n";
}
