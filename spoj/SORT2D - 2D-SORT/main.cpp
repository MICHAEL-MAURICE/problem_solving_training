#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool comparison(const pair<int,int> &a,const pair<int,int> &b){
    return (a.first<b.first||(a.first==b.first&&a.second>b.second));
}

int main()
{
    int  t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        pair<int,int>arr[n];
        for(int i=0;i<n;i++){

            cin>>arr[i].first>>arr[i].second;
        }

    sort(arr,arr+n,comparison);

for(int i=0;i<n;i++){
            cout<<arr[i].first<<" "<<arr[i].second<<endl;
        }

    }
    return 0;
}
