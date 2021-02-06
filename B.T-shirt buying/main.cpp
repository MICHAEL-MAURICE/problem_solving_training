#include<bits/stdc++.h>
using namespace std;
int c,i,n,m,j,t;
set<int>s[4];
main(){
	cin>>n;int a[n];
	for(i=0;i<3*n;i++){
		cin>>c;
			if(i<n)a[i]=c;else
			s[c].insert(a[i%n]);
	}
	cin>>m;
	for(i=0;i<m;i++){
		cin>>c;
		t=*s[c].begin();
		for(j=1;j<4;j++)
			s[j].erase(t);
		if(t)cout<<t<<" ";
		else cout<<"-1 ";
	}
}
