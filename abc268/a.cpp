#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    for(int i = 0;i < 5;i++){
        int a;
        cin >> a;
        st.insert(a);
    }
    cout << (int)st.size() << "\n";
}