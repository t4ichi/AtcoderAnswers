#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<bool> can(10);

    for(int i = 0;i < can.size();i++){
        can[i] = false;
    }   
    for(int i = 0;i < 9;i++){
        int index = (int)s[i] - '0';
        can[index] = true;
    }
    for(int i = 0;i < can.size();i++){
        if(can[i] == false){
            cout << i << "\n";
        }
    }    
}