#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

        bool valed=true;

    for(int i=0;i<n;++i){
        int c=0;
        for(int j=0;j<n;++j)
            if(arr[i]==arr[j]){
                 ++c;
            }


            if(n< 2*c-1){
                valed=false;
                break;
            }

    }
    if(valed)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
