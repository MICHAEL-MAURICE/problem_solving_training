#include <bits/stdc++.h>

using namespace std;
int arr1[27]={0},arr2[27]={0};
int main()
{
    string w1,w2,w3;cin>>w1>>w2>>w3;
   for(int i=0;i<w1.length();i++){
    arr1[w1[i]-65]++;

   }
    for(int i=0;i<w2.length();i++){
    arr1[w2[i]- 65]++;

   }
    for(int i=0;i<w3.length();i++){
    arr2[w3[i]-65]++;

   }

   for(int i=0;i<26;i++){
    if(arr1[i]!=arr2[i]){
        cout<<"NO";
        return 0;
    }
   }

   cout<<"YES";
    return 0;
}
