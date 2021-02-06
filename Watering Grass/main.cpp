#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
ll l,w;
int main()
{
    while(cin>>n>>l>>w){
        vector<pair<double,double>>sp;
        for(int i=0;i<n;i++){
            ll x,r;
            cin>>x>>r;
            if(4*r*r>1*w*w){
                double d =sqrt(r*r-(w*w/4.0));
                sp.push_back(make_pair(x-d,x+d));





            }


        }
        sort(sp.begin(),sp.end());
        int j=0;
        double rightmost=-1;
        double x=0;
        double


    }
    return 0;
}
