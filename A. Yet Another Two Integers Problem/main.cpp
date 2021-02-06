#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()


/*
0
3
2
92
87654322
9151
*/
{
    int n;long long a,b,c=0,k;
    cin>>n;
    while(n--){
            c=0;
            k=0;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
    continue;
        }
        else{
            ll m =max(a,b)-min(a,b);
            if(m>=10){
                    k=m%10;
                    if(k>0)
                      c++;
                    m-=k;
            c+=m/10;

            }
            else{
                c++;
            }


        }
        cout<<c<<endl;
    }


    return 0;
}
