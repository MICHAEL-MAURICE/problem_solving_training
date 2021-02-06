#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
	cin>>n;
	string c="ROYG";
	for(int i=0;i<n-3;i++)
		cout<<c[i%4];
	cout<<"BIV"<<endl;
	return 0;
}
