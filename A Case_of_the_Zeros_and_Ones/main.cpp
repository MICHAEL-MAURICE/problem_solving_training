#include <bits/stdc++.h>

using namespace std;

int main()
{
int n, c=0,b=0;cin>>n;
char r;
for(int i=0;i<n;i++){
    cin>>r;
    if(r=='0')
        c++;
    else
        b++;
}

cout<<abs(b-c);


    return 0;
}
