#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    
    int tx = 0;
    int ax = 0;

    for (int i = 0; i < x; i++)
    {
        if(i % (a + c) < a){
            tx += b;
        }

        if(i % (d + f) < d){
            ax += e;
        }
    }
    if(tx > ax){
        cout << "Takahashi" << "\n";
    }
    else if(tx < ax){
        cout << "Aoki" << "\n";
    }
    else{
        cout << "Draw" << "\n";
    }

}