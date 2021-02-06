#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,b;cin>>n;
    if(n==1){
        cout<<"Poor Alex";
        return 0;
    }
    pair<int,int>arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
        if(arr[i].first<arr[i].second){
          cout<< "Happy Alex";
            return 0;
        }

    }
 cout<<"Poor Alex";

    return 0;
}
