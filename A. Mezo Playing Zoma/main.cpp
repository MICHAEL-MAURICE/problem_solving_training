#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r=0,l=0;cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=='R'){
            r++;
        }
        else{
            l++;
        }
    }

    cout<<abs(l+r+1);
    return 0;
}
