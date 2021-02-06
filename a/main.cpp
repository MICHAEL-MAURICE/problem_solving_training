#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc,n,m,x;
ll arr[102][102];

int main()

{
    cin>>tc;
    while(tc--){

            cin>>n>>m;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){

                cin>>arr[i][j];

            }
        }
        for(ll i=0;i<n;i++){
            for (ll j=0;j<m;j++){
                if(arr[i][j]==arr[i][j+1]){
                        x=arr[i][j];
                    arr[i][j]=x+1;
                    i=0;
                    j=0;

                    if(arr[i][j]==arr[i][j-1]){
                        x=arr[i][j];
                    arr[i][j]=x+1;
                    i=0;
                    j=0;

                }
                }

                if(arr[i][j]==arr[i-1][j]){
                    x=arr[i][j];
                    arr[i][j]=x+1;
                    i=0;
                    j=0;
                }

                if(arr[i][j]==arr[i+1][j])  {
                     x=arr[i][j];
                    arr[i][j]=x+1;
                    i=0;
                    j=0;
                }

            }

        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){

                cout<<arr[i][j]<<" ";

            }
            cout<<"\n";


        }


    }



    return 0;
}
/*

cin>>tc;
   while(tc--){
    cin>>n;
    for(int i=0;i<n;i++){
            if(i==n-1)
            cout<<1;
    else
        cout<<1<<" ";
    }
    cout<<"\n";
   }


*/
