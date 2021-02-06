#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll gcd(ll a,ll b){

while(b){
    auto t=b;
    b=a%b;
    a=t;
}
return a;
}
vector<int> div(int n){
vector<int> ter,ret;
int i;
for(i=1;i<n/i;i++){

    if(n%i==0){
        ret.push_back(i);
        ter.push_back(n/i);
    }
}
if(i*i==n) ret.push_back(i);
reverse(ter.begin(),ter.end());
for(int v:ter){
    ret.push_back(v);
}
return ret;
}


int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    auto g=gcd(a,b);
    auto d=div(g);
    int n;scanf("%d",&n);
    while(n--){
        int w,e;scanf("%d%d",&w,&e);
        auto it =upper_bound(d.begin(),d.end(),e);
        if(it!=d.begin()&&*--it>=w)
            printf("%d\n",*it);
        else
            puts("-1");
    }
    return 0;
}
