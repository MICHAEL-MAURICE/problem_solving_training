#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,m;cin>>x>>m;
    string s;
    char arr[x][m];
    for(int i=0;i<x;i++)
     for(int j=0;j<m;j++){
      cin>>arr[i][j];
      if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y')
          {
              cout<<"#Color";
              return 0;


          }

      else{
        s="#Black&White";

      }

    }
    cout<<s;
    return 0;
}
