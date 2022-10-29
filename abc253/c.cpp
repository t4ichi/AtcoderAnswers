#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    multiset<int> s;

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if(type == 1){
            int x;
            cin >> x;
            s.insert(x);
        }
        else if(type == 2){
            int x,c;
            cin >> x >> c;
            for(int i = 0;i < c;i++){
                auto it = s.find(x);
                if(it == s.end()) break;
                s.erase(it);
            }
        }
        else if(type == 3){
            cout << *s.rbegin() - *s.begin()  << "\n";
        }
    }
}
