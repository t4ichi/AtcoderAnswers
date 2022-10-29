#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    //素数配列生成
    const int MAX = 1e6;
    vector<bool> isPrime(MAX + 1,true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= MAX; i++)
    {
        if(!isPrime[i]) continue;
        primes.push_back(i);
        for (long long j = (long long)i*i; j <= MAX; j += i)
        {
            isPrime[j] = false;
        }
    }

    //素数の累積和
    vector<int> s(MAX+1);
    for(int i : primes){
        s[i] = 1;
    }
    for (int i = 0; i < MAX; i++)
    {
        s[i+1] += s[i];
    }

    //数え上げ
    long long ans = 0;
    for(int i : primes){
        int j = min<long long>(i-1,n/i/i/i);
        ans += s[j];
    }
    cout << ans << "\n";        
}