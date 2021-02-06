#include <bits/stdc++.h>

using namespace std;

int b_s(int s, int e) {
while (s < e) {
int mid = s + (e - s + 1) / 2;
if (valid(mid))
s = mid;
else
e = mid - 1;
}
return s;
}

int main()
{
    int n,k;cin>>n>>k;r
    int arr[n+1],arr2[n+1];
    arr[0]=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n,greater<int>());
    arr2[0]=arr[]

    for(int i=1;i<n;i++){
        arr2[i]+=arr[i+1];
    }







    return 0;
}
