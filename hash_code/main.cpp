
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g,h;
    cin>>g>>h;
    long long sum=0;
    vector<int>v;
    long long arr[h];
    for(int i=0;i<h;i++)
        cin>>arr[i];

    for(int i=h-1;i>=0;i--){
        if(sum+arr[i]<=g){
            sum+=arr[i];
            v.push_back(i);

        }
        if(sum==g)
            break;
    }

    cout<<v.size()<<endl;
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";

    return 0;
}
