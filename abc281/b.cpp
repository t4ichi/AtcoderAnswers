#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    if(s.length() != 8){
        cout << "No" << "\n";
        return 0;
    }
    if(s[0] >= 'A' && s[0] <= 'Z' && s[7] >= 'A' && s[7] <= 'Z'){
        int num = 0;
        for(int i = 1;i < 7;i++){
            char c = s[i];
            if(isdigit(c)) { 
                num *= 10;
                num += c - '0';
            }
            else{
                cout << "No" << "\n";
                return 0;
            }
        }
        if(num >= 100000 && num <= 999999){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }       
    }
    else{
        cout << "No" << "\n";
    }     
}