#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    const int MAX = 210;
    vector<bool> isPrime(MAX + 1,true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= MAX; i++){
           if(!isPrime[i]) continue;
           for (long long j = (long long)i*i; j <= MAX; j += i){
                   isPrime[j] = false;
           }
    }

    for (int i = a; i <= b; i++){
        bool t_win = true;
        for(int j = c;j <= d;j++){
            if(isPrime[i+j]){
                t_win = false;
            }
        }
        if(t_win){
            cout << "Takahashi" << "\n";
            return 0;
        }
    }
    cout << "Aoki" << "\n";
}
