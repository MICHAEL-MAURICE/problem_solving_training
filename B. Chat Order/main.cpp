#include <bits/stdc++.h>

using namespace std;

map<string,bool>m;
    int n;

int main()
{
    scanf("%d",&n);
    string v[n];
   for(int i=0;i<n;i++){
        cin>>v[i];

    }

    for(int i=n-1;i>=0;--i){
    if(!m[v[i]]){
        cout<<v[i]<<"\n";
    }

        m[v[i]]=1;

    }
    return 0;
}
