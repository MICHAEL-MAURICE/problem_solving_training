#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,h,z,g;cin>>k;
    bool q=false,w=false,e=false;
    char arr[k][k];
    for(int i=0;i<k;i++)
     for(int j=0;j<k;j++){
        cin>>arr[i][j];
    }
    h=arr[0][0];
    z=arr[0][k-1];
    g=arr[0][1];
    for(int i=0;i<k;i++)
    for(int j=0;j<k;j++){
        if(i==j){
            if(arr[i][j]==h)
                q=true;
                else{
                    q=false;
                    i=k-1;
                    j=k-1;
                }
        }
        else if(i==k-1-j){
            if(arr[i][j]==z)
                w=true;
                else{
                    w=false;
                    i=k-1;
                    j=k-1;
                };
        }
        else{
            if(arr[i][j]==g&&(arr[i][j]!=h&&arr[i][j]!=z))
                e=true;

                else{
                    e=false;
                    i=k-1;
                    j=k-1;
                }

        }
    }

    if(q==true&&w==true&&e==true)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
