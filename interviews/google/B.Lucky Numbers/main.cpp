#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s2;
    int c=0,d=0;

    cin>>c;
   /* if(s =='1'){
        cout<<47;
        return 0;
    }
    for(int i=0;i<s.length();i++){
           // s[i]=s[i]%7;
        if(s[i]!='4'&&(s[i]<='4'||s[i]>'7')){
                s2+='4';
        c++;

        }
        else if(s[i]!='7'&&s[i]<='7'){
            s2+='7';
            d++;
        }

    }*/
    while(true){
    s2+=47;

    if(stoll(s2)>=c)
        cout<<s2;}
    return 0;
}
