#include <bits/stdc++.h>
using namespace std;
int n,l=0,ans=0;
string str;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>str;
    map<char,int>m;
    for(int i=0;i<n;i++){
        int x=++m[str[i]];
        while(m[str[l]]>1) --m[str[l++]];
        ans=(x==1?i-l+1:min(ans,i-l+1));
    }
    cout<<ans;
    return 0;
}
