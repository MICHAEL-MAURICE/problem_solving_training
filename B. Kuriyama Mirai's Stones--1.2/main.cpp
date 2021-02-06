#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;scanf("%d",&n);
    deque<long long>v1(n),v2(n);
    for(int i=0;i<n;i++)
        scanf("%lld",&v1[i]);
        v2=v1;
        sort(v2.begin(),v2.end());
        v1.push_front(0);
        v2.push_front(0);
        for(int i=1;i<=n;i++){
            v1[i]+=v1[i-1];
            v2[i]+=v2[i-1];
        }


       int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int l, r, t;
		long long sum = 0;
		scanf("%d %d %d", &t, &l, &r);
		if (t == 1) {
			sum = v1[r] - v1[l - 1];
		} else {
			sum = v2[r] - v2[l - 1];
		}
		printf("%lld\n", sum);
	}
    return 0;
}
