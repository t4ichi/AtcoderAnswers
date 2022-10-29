#include <bits/stdc++.h>
using namespace std;

int main(){
    long long k;
    cin >> k;

    string s;
    while (k > 0)
    {
        s += (k%2*2) + '0';
        k /= 2;
    }
    reverse(s.begin(),s.end());
    cout << s << "\n";
}