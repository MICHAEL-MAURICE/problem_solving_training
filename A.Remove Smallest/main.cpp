#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n,k,j,l;cin>>n;
   bool f=1;
   while(n--){
        vector<int>v;
   cin>>k;
   while(k--){
    cin>>j;
    v.push_back(j);


   }
   if(v.size()==1){cout<<"YES"<<endl;continue;}
   sort(v.begin(),v.end());
   for(int i=0;i<v.size()-1;i++ ){
    k=abs(v[i]-v[i+1]);
    if(k<=1){
       continue;
    }
    else{
        cout<<"NO"<<endl;
        f=0;
        break;
    }

   }
   if(f)
cout<<"YES"<<endl;


   }

    return 0;
}
