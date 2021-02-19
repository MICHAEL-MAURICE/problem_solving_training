#include<bits/stdc++.h>
using namespace std;
long long n,a[100010],m=0;
int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
        if((a[i]-a[0])*(a[i+1]-a[i])<0)
        {
            cout<<3<<endl<<1<<" "<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    cout<<0;
}