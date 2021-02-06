#include <bits/stdc++.h>



using namespace std;
int n,k,a[1500005],t,z,ans=1;
main(){
	cin>>n>>k;
for(int i=1; i<=n; i++)
    {cin>>a[i]; if (i<=k)z+=a[i];}
    t=z;
for(int i=k+1;i<=n; i++){
	t+=a[i]; t-=a[i-k];
	if(z>t){z=t; ans=i-k+1;}
}
cout<<ans;
}
