#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m=0,x=0,i,j;cin>>n;
     int sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

for(i=0;i<n;i++){
m=1;
for(j=i-1;j>=0;j--)
if(arr[j]<=arr[j+1]) ++m;
else break;
for(j=i+1;j<n;j++)
if(arr[j]<=arr[j-1]) ++m;
else break;
x=max(x,m);}
cout<<x;


    return 0;
}
