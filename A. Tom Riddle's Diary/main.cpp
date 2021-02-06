#include <bits/stdc++.h>

using namespace std;
map<string,bool>mp;

int main()
{
    int n;scanf("%d",&n);
    while(n--){
        string s;cin>>s;

        mp[s]? cout<<"YES"<<endl:cout<<"NO"<<endl;
        mp[s]=true;

    }

    return 0;
}
