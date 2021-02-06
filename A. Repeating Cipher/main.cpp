#include <bits/stdc++.h>

using namespace std;

int main()
{
   /*int n;cin>>n;
   string s,w;cin>>s;
   if(n==1){
    cout<<s<<endl;return 0;}
    if(n==3){
   w+=s[0];w+=s[1];
   cout<<w<<endl;
   return 0;
   }
   w+=s[0];w+=s[1];
   for(int i=2;i<n-1;i++){
    if(s[i]!=s[i+1]){
        w+=s[i+1];
    }

   }
   cout<<w<<endl;*/

   int n,j;cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
    cin>>j;
    v.push_back(j);
   }
   sort(v.begin(),v.end());
   v.pop_back();
   if(v.size()==1)
    cout<<0<<endl;

   else{
    cout<<v[1]-v[0]<<endl;
   }
    return 0;
}
