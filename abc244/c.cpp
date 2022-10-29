#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int size = 2*n+1;
    set<int> s;
    for (int i = 1; i <= size; i++)
    {
        s.insert(i);
    }
    for (int i = 0; i < size; i++)
    {
        if(i%2 == 0){
            int x = *s.begin();
            s.erase(x);
            cout << x << "\n";
        }
        else{
            int x;
            cin >> x;
            s.erase(x);
        }
    }
    
}
