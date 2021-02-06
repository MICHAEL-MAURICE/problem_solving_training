#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N=1e5+7;
int tc,a[N],n,c;

int main()
{
    scanf("%d",&tc);
    while(tc--){

        scanf("%d",&n);
         c=1;
        for(int i=0;i<n;i++){
            scanf("%d",a+i);
        }
        ll sum=0;
        for(int i=0;i<n-1;i++){
            if(sum+a[i]<a[i+1]){
                c++;
    sum+=a[i];
            }


        }
        printf("%d\n",c);
    }
    return 0;
}
