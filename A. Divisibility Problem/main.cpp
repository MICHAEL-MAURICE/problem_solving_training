#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d", &a, &b);
        int ans=0;
        if(a%b!=0)
        ans=abs((a%b)-b);
        printf("%d\n",ans);


    }
    return 0;
}
