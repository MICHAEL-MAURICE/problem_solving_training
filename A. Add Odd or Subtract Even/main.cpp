#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n,c=0;cin>>n;
    ll a,b,x;
    while(n--){
            x=0;c=0;
       cin>>a>>b;
       if(a==b){
        cout<<0<<endl;
        continue;
       }
       while(a!=b){
      if(b>a){
         x=b-a;
        while(b>a){
        if(x&1){
            a+=x;
            c++;

        }
        else if(x%2==0&&x!=0){
                a+=x-1;
        c++;
        x=b-a;

        }


        }



       }

       else {

            x=a-b;
          while(a>b){
        if(x&1){
            a-=x+1;
            c++;


        }
        else if(x%2==0&&x!=0){
                a-=x;
        c++;
        x=a-b;

        }


        }

        }}
        cout<<c<<endl;

    }
    return 0;
}
