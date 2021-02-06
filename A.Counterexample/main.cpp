#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long x,y=0,z;cin>>x>>z;
    if(x%2!=0){
        x++;
    }
    if(abs(x-z)<2){
        cout<<-1;
    }
    else{
        cout<<x<<" "<<x+1<<" " <<x+2;
    }
    return 0;
}
