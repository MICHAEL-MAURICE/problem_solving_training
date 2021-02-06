#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,c=0;cin>>n>>k;
    int arr[n+1];
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
        if(arr[i]==1){
            c++;

        }
    }
    for(int i=1;(i<k&&i<=n-k);i++){
        if(arr[i+k]+arr[k-i]==1){
            c--;

        }

    }

    cout<<c;

    return 0;
}
