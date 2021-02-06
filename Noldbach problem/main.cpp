#include <bits/stdc++.h>

using namespace std;
bool notPrime[1001];
void sieve(){
notPrime[0]=1;notPrime[1]=1;
for(int i=2;i<=1001/i; i+=1+(i&1)){
    if(notPrime[i]==0)
    for(int j=i*i;j<1001;j+=i){
        notPrime[j]=1;
    }}}


int main()
{
	sieve();
	int n,k,count=0,sum;
	cin>>n>>k;
	int last=2;
	for (int i = 3; i <n; ++i)
	{
		if(!notPrime[i])
		{
			sum=last+i+1;
			if(sum<=n&&!notPrime[sum])
				count++;
			last=i;
		}
	}
	if(count>=k)
		cout<<"YES";
	else
		cout<<"NO";
}
