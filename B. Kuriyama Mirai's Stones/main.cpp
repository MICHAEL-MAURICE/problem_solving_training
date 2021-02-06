#include<bits/stdc++.h>

using namespace std;

int main()
{
    int  n,s,d,f;
    long long sum=0;
    cin>>n;
    long long arr1[n];
    long long arr2[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
        arr2[i]=arr1[i];
    }
    sort(arr2,arr2+n);
    int j;
    cin>>j;
    for(int i=0; i<j; i++)
    {
        cin>>s>>d>>f;
        if(s==1)
        {
            sum=0;
            for(int i=d-1; i<f; i++)
                sum+=arr1[i];
            cout<<sum<<endl;
        }
        else if(s==2)
        {
            sum=0;
            for(int i=d-1; i<f; i++)
                sum+=arr2[i];
            cout<<sum<<endl;
        }
    }
    return 0;
}
