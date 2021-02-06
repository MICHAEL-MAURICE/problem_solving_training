#include <bits/stdc++.h>

using namespace std;

int main()
{
map<int,int>m;
int a,n,t,o;
long long s=0,u=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a;
    m[a]=i+1;
}
cin>>t;
for(int i=0;i<t;i++){

    cin>>o;
    s+=m[o];
    u+=(n-(m[o]-1));
}
cout<<s<<" "<<u;
    return 0;
}
