#include <bits/stdc++.h>

using namespace std;
map<string,int>m;
string s;
int n,c=0;
int main()
{
    cin>>n;
    while(n--){
        cin>>s;
        m[s]++;
        if(m[s]>1){
                c=--m[s];
            cout<<s<<c<<endl;
        m[s]++;

        }
        else{
            cout<<"OK"<<endl;
        }
    }
    return 0;
}
