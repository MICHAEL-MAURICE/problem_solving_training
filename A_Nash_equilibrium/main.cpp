#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,j,x=0,y=0;cin>>k>>j;
    int arr[k][j];
    for(int i=0;i<k;i++)
        for(int r=0;r<j;r++)
        cin>>arr[i][r];

    for(int i=0;i<k-1;i++)
        for(int r=0;r<j-1;r++){
          if(x=min(arr[i][r],arr[i+1][j+1])&&arr[i][r]!=arr[i+1][r+1])
          {
              x=x;
          }
          else{
            x=0;
          }
           if(y=min(arr[r][i],arr[r+1][i+1])&&arr[r][i]!=arr[r+1][i+1]){
            y=y;

           }
           else{
            y=0;
           }

        }
cout<<x<<" "<<y;

    return 0;
}
