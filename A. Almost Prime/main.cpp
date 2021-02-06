#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int NN = 1e5;
bool notPrime[NN];

void sieve() {
    notPrime[0] = notPrime[1] = 1;
    for (int i = 2; i < NN / i; i += 1 + (i & 1))
        if (notPrime[i] == 0)
            for (int j = i * i; j < NN; j += i)
                notPrime[j] = 1;
}

vector<int>primes;
//here to generate almost prime numbers from 2 to n
int a[3001];
int main()
{
	int n, s = 0, i, j;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		if (a[i] == 0)
			for (j = i; j<= n; j += i)
				a[j]++;
		if (a[i] == 2) s++;
	}
	printf("%d\n", s);
	return 0;
}
/*int main()
{
    sieve();

   /* int n,count1 =0,count2=0;
    scanf("%d",&n);
    for (int i = 2; i <NN/i; i += 1 + (i & 1)){
        if(notPrime[i]==0)primes.push_back(i);
    }

    for(int i=6;i<=n;i++){
        for(int j=1;j<=i;j++){
                if(primes[j]>i){break;}

                if(i%primes[j]==0){++count1;}
                if(count1==2){ break;}


        }
        if(count1==2){
            ++count2;
            count1=0;
        }

    }
   cout<<count2;

    return 0;
}*/
