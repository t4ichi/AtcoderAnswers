#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> s;
    for(int i = 0;i < n;i++){
        string ss;
        cin >> ss;
        auto it = s.find(ss);
        if(s.empty() || it == s.end()){
            s.emplace(ss,1);
            cout << ss << "\n";
        }
        else{
            int cnt = s[ss];
            s[ss]++;
            cout << ss << "(" <<  cnt << ")" << "\n";
        }
    }
}
