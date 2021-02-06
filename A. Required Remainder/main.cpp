#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d;
    cin>>d;
    long long x,y,z;

    while(d--){
         cin>>x>>y>>z;
        int a=z%x;
        if(a-y>=0){
            z=z-(a-y);
        }
        else
            z=z-a-x+y;

        cout<<z<<endl;
    }
    return 0;
}
