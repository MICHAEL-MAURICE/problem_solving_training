#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n,c,j=0;cin>>n;
   while(n--){
        cin>>c;


        j=c;


            int arr[c];
   for(int i=0;i<c;i++){
    cin>>arr[i];


   }
   sort(arr,arr+c);
   for(int i=0;i<c-1;i++){
    if(abs(arr[i]-arr[i+1])<=1){
        j--;
    }

   }
   if(j==1)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;}

    return 0;
}
