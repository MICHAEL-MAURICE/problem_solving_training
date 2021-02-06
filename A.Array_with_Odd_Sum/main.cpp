#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,k=0,g;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>g;
       for(int j=0;j<g;j++){
        cin>>k;
        sum+=k;
       }
       if(sum%2!=0)
       {
           cout<<"YES"<<endl;
           sum=0;
       }

       else{
         cout<<"NO"<<endl;
         sum=0;
       }

    }
    return 0;
}
