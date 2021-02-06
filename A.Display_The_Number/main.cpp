#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2==1) cout<<7;
		else cout<<1;
		for(int i=1;i<n/2;i++) cout<<1;
		cout<<endl;
	}

    return 0;
}
