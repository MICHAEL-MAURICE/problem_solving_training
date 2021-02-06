#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,c=0;scanf("%d",&n);
 int j=0;
int arr[3];
for(int i=0;i<3;i++)
    scanf("%d",&arr[i]);

    sort(arr,arr+3);
   while(n>=0){

        for(int i=0;i<3;i++)
         if(n%arr[i]==0&&arr[i]!=n){
            c+=(n/arr[i]);
             printf("%d",c);
               return 0;
                 }


        n-=arr[j];
        c+=1;
        j++;

   }

   printf("%d",c);
    return 0;
}
