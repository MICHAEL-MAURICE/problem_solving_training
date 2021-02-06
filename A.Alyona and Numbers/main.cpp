#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,c=0;cin>>n>>m;
    for(int i=1;i<=n;i++){

            c+=(i%5+m)/5;

    }
    cout<<c;
    return 0;
}
