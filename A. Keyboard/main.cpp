#include <bits/stdc++.h>

using namespace std;

int main()
{
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s,word;
    char c;
    cin>>c>>s;
    for(int i=0;i<s.length();i++){
        if(c=='R'){
                int j=key.find(s[i]);
        word+=key[j-1];


        }
       else if(c=='L'){
                int k=key.find(s[i]);
        word+=key[k+1];


        }

    }

    cout<<word;
    return 0;
}
