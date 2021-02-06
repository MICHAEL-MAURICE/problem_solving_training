#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,d,even=0,odd=0;
    cin>>c>>d;
    int arr[c];
    vector<int>v;
    for(int i=0;i<c;i++)
        cin>>arr[i];


    for(int i=0;i<c;i++)
    {


        if(i!=0&&even==odd){
            v.push_back(abs(arr[i]-arr[i-1]));
        }
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    int ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(d>=v[i]){
            d-=v[i];
            ans++;
        }
        else break;
    }
    cout<<ans;
    return 0;
}
