#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    deque<int> d;
    d.push_back(n);
    for(int i = n-1;i >= 0;i--){
        if(s[i] == 'R'){
            d.push_front(i);
        }
        else{
            d.push_back(i);
        }
    }
    while (!d.empty())
    {
        int p = 0;
        p = d.front();
        d.pop_front();
        cout << p << " ";
    }
    cout << endl;
}
