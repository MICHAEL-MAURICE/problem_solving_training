#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k, mins=0,ll=0,mat=0;cin>>n>>k;
    pair<int,int>arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i].second>>arr[i].first;

    }

    sort(arr,arr+k);
    for(int i=k-1;i>=0;i--){
            n-=arr[i].second;
           // cout<<"jjj"<<n;
            mat+=(arr[i].first*arr[i].second);
           // cout<<"jjj"<<mat;
    if(n<0){
            mins=abs(0-n);
    ll=mins*arr[i].first;
    mat-=ll;
    break;

    }
    else if(n==0){
        break;
    }


    }
cout<<mat;
    return 0;
}
