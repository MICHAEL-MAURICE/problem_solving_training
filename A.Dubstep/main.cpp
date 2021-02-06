#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j=0;
    string s,s2;
    cin>>s;
    for(int i=0;i<s.length();i++){
            if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
                i+=2;
                if(j>0)
                    s2+=' ';
            }
            else{
                s2+=s[i];
                j++;

            }

    }
    cout<<s2;
    return 0;
}
