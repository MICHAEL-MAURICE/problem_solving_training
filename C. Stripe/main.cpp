#include <iostream>

using namespace std;
int n;
const  int N=1e5+5;
int main()
{
   scanf("%d",&n);
    int pref[N];
    for(int i=1;i<=n;i++){
        int x;
       scanf("%d",&x);
        pref[i]=pref[i-1]+x;

    }
    int ways=0;
    for(int i=1;i<n;i++){
        if(pref[n]-pref[i]==pref[i]){
            ways+=1;}
    }

   printf("%d",ways);
    return 0;
}
