#include<bits/stdc++.h>
using namespace std;


int main()
{int t,n;cin>>t;
while(t--){cin>>n;string s;
cin>>s;string s1;int k=0;
for(int i=0;i<n;i++){
	if(int(s[i])%2!=0){k++;
	s1=s1+s[i];
	}
	if(k==2)
	break;
}
if(k==2)
cout<<s1;
else
cout<<-1;
cout<<endl;
}
return 0;
}
