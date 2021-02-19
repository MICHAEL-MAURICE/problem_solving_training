#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr[i]=make_pair(y,x);
    }
    sort(arr,arr+n);
    int cnt=1;
    int endtime=arr[0].first;
    for (int i = 1; i < n; ++i)
    {
        if(arr[i].second>endtime){
            cnt++;
            endtime=arr[i].first;
        }
    }
    cout<<cnt<<endl;
    return 0;
}