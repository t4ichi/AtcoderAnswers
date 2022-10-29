#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    string now;
    for (int i = 1; i <= n; i++)
    {
        s = now + to_string(i)+ " " + now; 
        now = s;
    }
    cout << s << "\n";
}
