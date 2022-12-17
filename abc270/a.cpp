#include<bits/stdc++.h>
using namespace std;

int main(){   
    int a,b;
    cin >> a >> b;

    auto f = [&](int n){
        set<int> st;
        if(n == 0){
        }
        else if(n == 1){
            st.insert(1);
        }
        else if(n == 2){
            st.insert(2);
        }
        else if(n == 3){
            st.insert(1);
            st.insert(2);
        }
        else if(n == 4){
            st.insert(4);
        }
        else if(n == 5){
            st.insert(1);
            st.insert(4);
        }
        else if(n == 6){
            st.insert(2);
            st.insert(4);
        }
        else if(n == 7){
            st.insert(1);
            st.insert(2);
            st.insert(4);
        }
        return st;
    };

    set<int> A = f(a);
    set<int> B = f(b);

    int p[3] = {1,2,4};
    int ans = 7;
    for(auto i : p){
        if(A.find(i) == A.end() && B.find(i) == B.end()){
            ans -= i;
        }
    }
    cout << ans << "\n";
}