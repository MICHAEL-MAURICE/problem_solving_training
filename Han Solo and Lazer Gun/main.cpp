#include <bits/stdc++.h>
using namespace std;
double n,x,y,i,j,k,l=0;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>x>>y;map<double,int>a;
    for(i=0;i<n;i++)
    {
        cin>>j>>k;
        if(x!=j)a[(y-k)/(x-j)]++;
        else l=1;
    }
    cout<<a.size()+l;

    return 0;
}
