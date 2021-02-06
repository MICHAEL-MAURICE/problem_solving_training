#include <bits/stdc++.h>
using namespace std;
long long n, V[100006];

int main()
{
    cin>>n;
    V[0]=-1e18;
    V[n+1]=1e18;
    for (int i=1; i<=n; i++)
        cin>>V[i];

        sort(V,V+n);
    for (int i=1; i<=n; i++)
        cout<<min(V[i]-V[i-1], V[i+1]-V[i])<<" "<<max(V[i]-V[1], V[n]-V[i])<<'\n';
}
