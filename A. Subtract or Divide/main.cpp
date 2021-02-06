#include <bits/stdc++.h>

using namespace std;
int n,c,tc,k=2;
int main()
{
    cin>>tc;
    while(tc--){
        cin>>n;
        while(n!=1){
            if(n%k==0){
                n=n/k;
                k++;
                c++;
            }
            else{
                n=n-1;

                c++;
            }
        }
cout<<c<<endl;

    }

    return 0;
}
