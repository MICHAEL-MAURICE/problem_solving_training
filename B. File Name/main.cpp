#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n-2;i++){
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x'){
            c++;
        }

    }
    cout<<c;
    return 0;
}
