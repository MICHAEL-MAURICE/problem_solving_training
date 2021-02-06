#include <iostream>

#include <algorithm>
using namespace std;

int main()
{
    string s,s2,s3;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+')
            s2+=s[i];
    }
    sort(s2.begin(),s2.begin()+s2.size());
    for(int i=0;i<s2.length();i++){
        s3+=s2[i];
        s3+='+';
    }
    int n=s3.length();
    for(int i=0;i<s3.length()-1;i++)
     cout<<s3[i];
    return 0;
}
