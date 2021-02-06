#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> ma;
    ma['A']=0;
    ma['B']=0;
    ma['C']=0;

    string s;

    for(int i=0;i<3;i++){
            cin>>s;
        if(s[1]=='>')ma[s[0]]++;
    else ma[s[2]]++;
    }



    if(ma['A']==1&&ma['B']==1)
        cout<<"Impossible";
        else{
            if(ma['A']==0)cout<<'A';
            else if(ma['B']==0)cout<<'B';
           else if(ma['C']==0) cout<<'C';

            if(ma['A']==1)cout<<'A';
            else if(ma['B']==1)cout<<'B';
           else if(ma['C']==1) cout<<'C';

           if(ma['A']==2)cout<<'A';
            else if(ma['B']==2)cout<<'B';
           else if(ma['C']==2) cout<<'C';
        }
    return 0;
}
