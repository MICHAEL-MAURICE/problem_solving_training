#include <bits/stdc++.h>

using namespace std;
const int MOD = 1073741824  ;
long long sol[1000001];
long long d(long long a){
if(sol[a]!=0){
    return sol[a];
}
int i,c=0;
for (i = 1; i  <= a/i; i++) {
		if (a % i == 0) {
			if (i * i != a) {
				c++;
			}
			c++;
		}
	}
	sol[a] = c;
	return c;
}

int main()
{
    /*long long a,b,c,m=0,sum=0,i,j,v;
    cin>>a>>b>>c;

    for( i=1;i<=a;i++)
    for( j=1;j<=b;j++)
    for( v=1;v<=c;v++){

            sum+=d(i*j*v);
         }



    cout<<sum%MOD;*/
    string a,b;
    cin>>a>>b;
    a==b?cout<<a:cout<<1;
    return 0;
}
