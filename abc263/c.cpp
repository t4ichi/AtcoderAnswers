#include <bits/stdc++.h>
using namespace std;

int n,m;
deque<int> que;
void rec(int i,int j){
    if(i == n){
        for(int q : que){
            cout << q << " ";
        }
        cout << "\n";
        return;
    }
    for(int k = j+1;k <= m;k++){
        que.push_back(k);
        rec(i+1,k);
        que.pop_back();
    }
}

int main(){
    cin >> n >> m;
    rec(0,0);
}