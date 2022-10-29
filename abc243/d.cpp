#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long x;
    cin >> n >> x;
    string s,t;
    cin >> s;

    for(char c : s){
        if(c == 'U'){
            if(t.size() > 0 && t.back() != 'U'){
                t.pop_back();
            }
            else{
                t.push_back(c);
            }
        }
        else{
            t.push_back(c);
        }
    }
    for(char c : t){
        if(c == 'U'){
            x /= 2;
        }
        else if(c == 'L'){
            x = x*2;
        }
        else if(c == 'R'){
            x = x*2+1;        
        }
    }
    cout << x << "\n";
}
