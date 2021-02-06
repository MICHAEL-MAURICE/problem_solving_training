#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,x;
    set<ll>s;
    scanf("%lld",&n);
    for (ll i = 0; i < n * n; ++i) {
        scanf("%d", &x);
        s.insert(x);
    }
    while(true){
    if(s.size()>n){
        s.erase(s.begin());
    }
    else if(s.size()<n){
        for(ll i=0;i<n;i++){
            cout<<*s.begin()<<" ";
        }
        return 0;}
        else break;
    }

    for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    return 0;
}
