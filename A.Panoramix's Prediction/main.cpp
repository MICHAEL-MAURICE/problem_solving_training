#include <iostream>

using namespace std;
int main(){
    int n,m,x,y; cin>>n>>m;

    while(x==0)
        {x=n; n++; y=n;
    for(int i=2; i<y; i++)
        {if(y%i==0) x=0;}
    }
    if(m==y)
    {cout<<"YES";}
    else {cout<<"NO";}
    return 0;
}
