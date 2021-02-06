#include <bits/stdc++.h>

using namespace std;
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))

int main()
{
int a[]={2,1,4,5,3,7};
int s[]={4,0,0,0,0,0};
for(int i=0;i<5;i++){
    s[i]+=a[i+1];
}
for(int i=0;i<5;i++)
    cout<<s[i]<<" ";
    return 0;
}
