#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  x,c,v,d=0,f=0;cin>>x>>c>>v;

    d=x/v;
    f=c/v;
    if(x%v!=0){
        d++;
    }
    if(c%v!=0){
        f++;
    }

    cout<<d*f;

    return 0;
}
