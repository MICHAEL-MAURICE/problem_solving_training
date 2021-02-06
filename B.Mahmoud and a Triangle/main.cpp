#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);


    for(int i=n;i>=3;i--){//i>=3 because arr[i-3]
      if(arr[i-1]+arr[i-2]>arr[i-3]&&arr[i-1]+arr[i-3]>arr[i-2]&&arr[i-2]+arr[i-3]>arr[i-1]){
          cout<<"YES";
          return 0;
      }
  }

    cout<<"NO";
    return 0;
}
