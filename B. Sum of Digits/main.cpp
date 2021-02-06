#include <bits/stdc++.h>
using namespace std;
//48 511
int main()
{
    string s;
    stringstream ss;
    long long c=11;
    long long count=0;
    cin>>s;

    if(s.length()<2){
        cout<<0;
        return 0;
    }
    while(c>=10){
            c=0;

    for(int i=0;i<(int)s.length();i++){
            c+=(s[i]-'0');

    }

    ss<<c;
    s.clear();
    ss>>s;
count++;

    }
cout<<count;


    return 0;
}
