#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
string s[110];
cin>>n;
for(i=0;i<n;i++)
cin>>s[i];

sort(s,s+n);
for(i=0;i<n;i++)
cout<<s[i];

cout<<s[n/2]<<endl;
    return 0;
}
