#include <bits/stdc++.h>
#include<sstream>
using namespace std;

int main()
{
    string s1;cin>>s1;
    int x=11,count=0;
    stringstream ss;
    if(s1.length()<2){
        cout<<0;
        return 0;
    }
    while(x>=10){
        x=0;
        for(int i=0;i<s1.length();i++){
            x+=(s1[i]-'0');
        }
        //s1=to_string(x);
         cin>>x;
         ss<<x;
         ss>>s1;
         count++;
    }

    cout<<count;
    return 0;
}
