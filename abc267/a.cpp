#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s == "Monday"){
        cout << 5 << "\n";
    }
    else if(s == "Tuesday"){
        cout << 4 << "\n";
    }
    else if(s == "Wednesday"){
        cout << 3 << "\n";
    }
    else if(s == "Thursday"){
        cout << 2 << "\n";
    }
    else{
        cout << 1 << "\n";
    }
}