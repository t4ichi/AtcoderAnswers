#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){
    int k;
    cin >> k;

    int tmp = k/60;
    int hour = 21;
    if(tmp + hour >= 24){
        hour = 0;
    }
    int min = abs(tmp * 60 - k);
    printf("%02d:%02d \n",hour+tmp,min);
}