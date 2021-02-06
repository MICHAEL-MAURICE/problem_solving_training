#include <bits/stdc++.h>
using namespace std;
int a[20], m=20;
int sum;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int tc;cin>>tc;
    while (tc--){
        int n;cin>>n;
        int m;cin>>m;
        bool f=false;
        for(int i=0;i<m;i++)cin>>a[i];
        for(int mask=0;mask<(1<<m);mask++) {
            sum=0;
            for (int i = 0; i < m; i++) {
                if(((1<<i)&mask) !=0){
                    sum+=a[i];
                }

            }
            if (sum==n)
                f= true;
        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}
