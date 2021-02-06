#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;

    int a,s,d,f,k=0;
    for(int i=0;i<n;i++){


            cin>>a>>s>>d>>f;
            k=(a+s+d+f)/3;

   if((a+s+d+f)%3==0&&k>=a&&k>=s&&k>=d){
    cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;

    }


    return 0;
}
