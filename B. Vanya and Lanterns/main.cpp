#include<bits/stdc++.h>
using namespace std;
int n,l,m,i,a[1005];
main(){
	cin>>n>>l;
	for(i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	m=max(a[0],l-a[n-1])*2;//to get the most lighting between first light and the last one
	for(i=1;i<n;i++) m=max(m,a[i]-a[i-1]);
	printf("%lf",m/2.0);
}
