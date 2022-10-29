#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,x,y,z;
  cin >> n >> x >> y >> z;
  vector<int> a(n),b(n);
  vector<pair<int,int>> p;
  vector<bool> ok(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  p = vector<pair<int,int>>();
  for (int i = 0; i < n; i++)
  {
    p.emplace_back(-a[i],i);
  }
  sort(p.begin(),p.end());
  for (int i = 0; i < x; i++)
  {
    ok[p[i].second] = true;
  }

  p = vector<pair<int,int>>();
  for (int i = 0; i < n; i++)
  {
    if(ok[i])continue;
    p.emplace_back(-b[i],i);
  }
  sort(p.begin(),p.end());
  for (int i = 0; i < y; i++)
  {
    ok[p[i].second] = true;
  }

  p = vector<pair<int,int>>();
  for (int i = 0; i < n; i++)
  {
    if(ok[i])continue;
    p.emplace_back(-(a[i] + b[i]),i);
  }
  sort(p.begin(),p.end());
  for (int i = 0; i < z; i++)
  {
    ok[p[i].second] = true;
  }

  for (int i = 0; i < n; i++)
  {
    if(ok[i]){
      cout << i+1 << "\n";
    }
  }
}