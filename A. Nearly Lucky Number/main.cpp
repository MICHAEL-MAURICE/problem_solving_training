#include <iostream>

using namespace std;


int x;
int main()
{
	string s;
	cin>>s;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i]=='7'||s[i]=='4') x++;
	}
	if(x==7||x==4) cout<<"YES";
	else cout<<"NO";
}
