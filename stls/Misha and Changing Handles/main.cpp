#include<bits/stdc++.h>
using namespace std;
int n;
map<string,string> mp;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s,ss;
        cin>>s>>ss;
        if(mp[s]!="")mp[ss]=mp[s];
        else mp[ss]=s;
        mp.erase(s);
    }
    cout<<mp.size()<<endl;
    for(auto i:mp)cout<<i.second<<" "<<i.first<<endl;
}