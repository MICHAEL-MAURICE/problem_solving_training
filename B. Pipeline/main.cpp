#include <iostream>

using namespace std;
typedef long long         ll;
ll sum(ll n){

return (n*(n+1))/2;
}
ll sum(ll s,ll e){
if(s<1){
    return sum(e);
}
else{
    return sum(e)-sum(s-1);
}
}

ll minspliter(ll k,ll n){

ll st=1, en=k;
while(st<en){

    ll mid=(st+en)/2;
    ll s=sum(mid,k);

    if(s==n){
        return k-mid+1;
    }
    if(s>n){
        st=mid+1;
    }
    else{
        en=mid;
    }


}
return k-st+2;

}

int main()
{
    ll k,n;cin>>n>>k;
    if(n==1){
        cout<<0<<endl;
    }
    else if(n<=k){
         cout<<1<<endl;
    }
    else{

        --k;
        --n;
        if(sum(k)<n){
             cout<<-1<<endl;
        }
        else{
            cout<<minspliter(k,n)<<endl;
        }
    }
    return 0;
}
