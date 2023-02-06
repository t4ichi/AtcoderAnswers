#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,k,q,l[N],r[N];
long long a[N];
long long t[N];
long long s[N];
bool check(long long x){
    int cnt=0;
    for(int i=0;i<n;i++)
        t[i]=a[i]-x;
    for(int i=0;i<k;i++)
        s[i]=t[i];
    for(int i=k;i<n;i++){
        s[i]=s[i-k]+t[i];
        if(s[i-k]<0) cnt++;
    }
    if(s[n-1]>=0) return true;
    for(int i=0;i<q;i++){
        int l=::l[i]-1,r=::r[i]-1;
        if(r-l+1<k) continue;
        if(cnt==0) return false;
        long long sum=0;
        for(int j=l;j<l+k;j++) sum+=t[j];
        if(sum>=0){
            cnt--;
            for(int j=l+k;j<=r;j++){
                sum+=t[j]-t[j-k];
                if(sum>=0) cnt--;
            }
        }
    }
    return cnt<=0;
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    for(int i=0;i<q;i++)
        cin>>l[i]>>r[i];
    long long l=0,r=2e9+10;
    while(l<r){
        long long mid=(l+r)/2;
        if(check(mid)) r=mid;
        else l=mid+1;
    }
    for(int i=0;i<q;i++)
        cout<<(check(l)?"Yes\n":"No\n");
    return 0;
}
