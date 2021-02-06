#include <bits/stdc++.h>

using namespace std;

int main()
{
int b[1001];
	int n,cut=0,i,j;
	cin>>n;
	int a[n];
	for(i=1; i<=n; i++) {
		cin>>a[i];
		b[a[i]]=i;
	}for(i=1; i<=n; i++)
	if(b[a[i]]==i)
        cut++;
	cout<<cut<<endl;
	for(int i=1;i<=n;++i)
	if(b[a[i]]==i)
	cout<<a[i]<<" ";
	return 0;
}
