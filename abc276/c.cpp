#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0;i < n;i++){
        cin >> p[i];
    }

    bool isprev = false;
    do{
        if(isprev){
            for(auto val : p){
                cout << val << " ";
            }
            cout << "\n";
            return 0;
        }
        else{
            isprev = true;
        }
    }
     while(prev_permutation(p.begin(),p.end()));
}
