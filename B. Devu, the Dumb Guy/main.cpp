#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,c;
    long long s=0;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
     for(int i=0;i<n;i++){
        s+=arr[i]*c;
        c--;
        if(c<=1){
            c=1;
        }
     }
    cout<<s;
    return 0;
}
