#include <bits/stdc++.h>

using namespace std;
int tc,k,l,c;
double n;
vector<int>v;
int sum;
int main()
{
    cin>>tc;
    while(tc--){
        cin>>n>>k;
          sum=0;
        for(int i=0;i<int(n*k);i++){
                cin>>l;
        v.push_back(l);


        }
        int z=n/2;

        int x=ceil(n/2);

        if(x<=1){

            for(int i=0;i<(n*k);i+=2)
                sum+=v[i];

        }
        else if(x==z){
            reverse(v.begin(),v.end());
            for(int i=z;i<(n*k)-(n-1);i+=(x+1)){

                sum+=v[i];



              }

        }
        else{
             reverse(v.begin(),v.end());

              for(int i=x-1;i<(n*k)-(n);i+=(x)){

                sum+=v[i];
//cout<<v[i]<<endl;


              }


        }
        cout<<sum<<endl;
        v.clear();

    }

    return 0;
}
