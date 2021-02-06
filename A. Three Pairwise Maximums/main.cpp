#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,z;
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        if(x==z){
            cout<<"YES\n"<<x<<y;

            (y>1)?cout<<y-1<<endl:cout<<y<<endl;
        }
        else if(x==y){

            cout<<"YES\n"<<x<<z;
            (z>1)?cout<<z-1<<endl:cout<<z<<endl;
        }
        else if(y==z){
            cout<<"YES\n"<<y<<x<<
            (x>1)?cout<<x-1<<endl:cout<<x<<endl;
        }
        else if((x==y&&x==z)&&y==z){
             cout<<"YES\n"<<y<<x<<z<<endl;
        }
        else{
             cout<<"NO\n";
        }

    }
    return 0;
}
