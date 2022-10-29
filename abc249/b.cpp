#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    bool isSmall = false;
    bool isBig = false;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] < 'z') {
            isSmall = true;
        }
        else{
            isBig = true;
        }
    }
    
    bool can = true;
    for (int i = 0; i < s.size()-1; i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if(s[i] == s[j]){
                can = false;
            }
        }
    }
    if(isSmall && isBig && can){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";   
    }
    
}