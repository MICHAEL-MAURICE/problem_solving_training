#include <bits/stdc++.h>
using namespace std;
int n,m,c=0;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>m;
    int l=min(n,m);
    for(int i=0;i<=l;i++){
        for(int j=0;j<=l;j++){
            if(((i*i)+j==n)&&(i+(j*j)==m))
                c++;
        }
    }
    cout<<c<<"\n";
    return 0;
}
