#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,e=0,o=0,t;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cin>>t;
			if(t%2==0) e++;
			else o++;
		}
		if(o%2==1||(o!=0&&o%2==0&&e!=0)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;}
