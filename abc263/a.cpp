#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(14,0);
    for(int i = 0;i < 5;i++){
        int n;
        cin >> n;
        a[n]++;
    }
    int three_card = 0;
    int two_card = 0;
    for(int i = 1;i < 14;i++){
        if(a[i] == 2){
            two_card++;
        }
        if(a[i] == 3){
            three_card++;
        }
    }
    if(three_card == 1 && two_card == 1){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}