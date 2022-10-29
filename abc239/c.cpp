#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> f(){
    int x,y;
    cin >> x >> y;
    vector<pair<int,int>> p;
    for (int i = -2; i <= 2; i++)
    {
        for (int j = -2; j <= 2; j++)
        {
            if(i * i + j * j != 5)continue;
            p.emplace_back(x+i,y+j);
        }
    }
    return p;
}

int main(){
    vector<pair<int,int>> A = f();
    vector<pair<int,int>> B = f();

    for(auto a : A){
        for(auto b : B){
            if(a == b){
                cout << "Yes" << "\n";
                return 0;
            }   
        }
    }
    cout << "No" << "\n";
}
