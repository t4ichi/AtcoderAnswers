#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    set<int> dpX,dpY;
    dpX.insert(a[0]);
    dpY.insert(0);

    for(int i = 1;i < n;i++){
        if(i%2 == 0){
            set<int> ns;
            for(auto nx : dpX){
                ns.insert(nx+a[i]);
                ns.insert(nx-a[i]);
            }
            dpX = ns;
        }
        else{
            set<int> ns;
            for(auto ny : dpY){
                ns.insert(ny+a[i]);
                ns.insert(ny-a[i]);
            }
            dpY = ns;
        }
    }
    
    if(dpX.count(x) && dpY.count(y)){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}
